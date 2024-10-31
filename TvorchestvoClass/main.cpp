#include <iostream>
#include <vector>
#include <array>
#include <cmath>

using std::cout;

class Shape {//просто фигура
public:
    virtual ~Shape() { cout << "Shape deleted\n"; }
    virtual void Draw() const = 0;
};

class Polygon : public Shape {//многоугольник
protected:
    int numSides;

public:
    Polygon(int sides) : numSides(sides) {}
    virtual void Draw() const override = 0;
};

class Triangle : public Polygon {//треугольник
protected:
    std::array<double, 3> angles;

public:
    Triangle(int a1, int a2, int a3) : Polygon(3) {
        if (!CheckAngles(a1, a2, a3)) {
            cout << "Неправильные углы\n";
        } else {
            angles[0] = a1;
            angles[1] = a2;
            angles[2] = a3;
        }
    }

    bool CheckAngles(int a, int b, int c) const {
        return (a > 0 && b > 0 && c > 0 && a + b + c == 180);
    }

    void Draw() const override {
        cout << "Треугольник с углами: " << angles[0] << ", " << angles[1] << ", " << angles[2] << "\n";
    }
};

class Square : public Polygon {//квадрат
protected:
    int sideLength;

public:
    Square(int length) : Polygon(4), sideLength(length) {}

    void Draw() const override {
        cout << "Квадрат с площадью: " << sideLength * sideLength << "\n";
    }
};

class Rectangle : public Polygon {//прямоугольник
protected:
    int width;
    int height;

public:
    Rectangle(int w, int h) : Polygon(4), width(w), height(h) {}

    void Draw() const override {
        cout << "Прямоугольник с размерами: " << width << " x " << height << " и площадью: " << width * height << "\n";
    }
};

class Pentagon : public Polygon {//пятиугольник
protected:
    int sideLength;

public:
    Pentagon(int length) : Polygon(5), sideLength(length) {}

    void Draw() const override {
        double area = (sqrt(5 * (5 + 2 * sqrt(5))) * sideLength * sideLength) / 4;
        cout << "Правильный пятиугольник с длиной стороны: " << sideLength << " и площадью: " << area << "\n";
    }
};

class Hexagon : public Polygon {//шестиугольник
protected:
    int sideLength;

public:
    Hexagon(int length) : Polygon(6), sideLength(length) {}

    void Draw() const override {
        double area = (3 * sqrt(3) * sideLength * sideLength) / 2;
        cout << "Правильный шестиугольник с длиной стороны: " << sideLength << " и площадью: " << area << "\n";
    }
};

class Ellipse : public Shape {//эллипс
protected:
    int posX;
    int posY;
    int radiusX;
    int radiusY;

public:
    Ellipse(int x, int y, int rx, int ry) : posX(x), posY(y), radiusX(rx), radiusY(ry) {}

    void Draw() const override {
        cout << "Эллипс с центром в (" << posX << ", " << posY << ") и радиусами: " << radiusX << ", " << radiusY << "\n";
    }
};

class Circle : public Ellipse {//круг
public:
    Circle(int x, int y, int r) : Ellipse(x, y, r, r) {}

    void Draw() const override {
        cout << "Круг с центром в (" << posX << ", " << posY << ") и радиусом: " << radiusX << "\n";
    }
};

class Oval : public Ellipse {//овал
protected:
    int minorRadius;

public:
        Oval(int x, int y, int big_r, int small_r) : Ellipse(x, y, big_r, small_r), minorRadius(small_r) {}

    void Draw() const override {
        cout << "Овал с центром в (" << posX << ", " << posY << ") и радиусами: " << radiusX << " и " << minorRadius << "\n";
    }
};

void Process(const Shape& shape) {
    shape.Draw();
}

int main() {
    std::vector<Shape*> shapes;
    shapes.push_back(new Triangle(90, 30, 60));
    shapes.push_back(new Circle(0, 0, 5));
    shapes.push_back(new Square(10));
    shapes.push_back(new Rectangle(10, 5));
    shapes.push_back(new Pentagon(7));
    shapes.push_back(new Hexagon(6));
    shapes.push_back(new Ellipse(0, 0, 5, 3));
    shapes.push_back(new Oval(0, 0, 7, 4));

    for (const auto& shape : shapes) {
        Process(*shape);
    }

    for (auto& shape : shapes) {
        delete shape;
    }

    return 0;
}
