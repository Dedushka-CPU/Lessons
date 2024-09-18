#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;

enum class Color{
		Black,
		Red,
		White
};

struct Point{
		double x=0.0;
		double y=0.0;
		double z=0.0;
		Color color;
};

int main(){
	Point point1;
	point1.color=Color::White;
	Point point2={1.5,-5.08,-63.0,Color::Red};
	point1.z=58;
	point2.y+=2;	
	cout<<point2.y<<endl;
	cout<<sizeof(point2)<<endl<<sizeof(Color)<<endl<<sizeof(double)<<endl;
	return 0;
}

