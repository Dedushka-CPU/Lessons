#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <bits/std_function.h>

using std::cout;
using std::cin;
class Shape{
private:
public:
    virtual ~Shape(){cout<<"Deleted\n";}
    virtual void Draw(){};
};
class Treugolnik:public Shape {
protected:
    std::array<double,3> gradus;
    std::vector<double> storoni;
public:
    Treugolnik(const int u1,const int u2,const int u3) {
        if(CheckGradus(u1,u2,u3)==false) {
            cout<<"Ne pravilno\n";

        }else {
            gradus[0]=u1;
            gradus[1]=u2;
            gradus[2]=u3;
        }

    }
    bool CheckGradus(int a,int b,int c) {
        if(a<0 || b<0 || c<0) {
            return false;
        }
        if(a+b+c!=180) {
            return false;
        }
        return true;
    }
    void draw(){
        cout<<"Gradus:"<<gradus[0]<<" "<<gradus[1]<<" "<<gradus[2]<<"\n";
        //cout<<"Storoni:"<<storoni[0]<<" "<<storoni[1]<<" "<<storoni[2]<<"\n";
    }
};

class Square:public Shape {
protected:
    int x;
public:
    Square(const int y) {
        x=y;
    }
    void draw(){
        cout<<"S="<<x*x<<"\n";
    }
};
class Cicle:public Shape {
protected:
    int pos_x;
    int pos_y;
    int radius;
public:
    Cicle(const int x,const int y,const int r) {
        pos_x=x;
        pos_y=y;
        radius=r;
    };
    void draw() {
        cout<<"Circle("<<pos_x<<","<<pos_y<<") radius:"<<radius<<"\n";
    }
};

void Procces(const Shape& a){
    a.Draw();
}

int main()
{
  /*  Treugolnik t(90,30,60);
    t.draw();
    Cicle c(0,0,5);
    c.draw();
    Square s(19);
    s.draw();*/
    std::vector<Shape*> figure;
    figure.push_back(new Treugolnik(90,30,60));
    figure.push_back(new Cicle (0,0,5));
    figure.push_back(new Square (10));
    Procces(*figure[0]);
    Procces(*figure[1]);
    Procces(*figure[2]);
    return 0;
}
