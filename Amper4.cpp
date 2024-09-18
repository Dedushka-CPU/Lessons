#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

struct Point{
	double x,y,z;
};

int main(){
	Point point1={1.0,1.0,1.0};
	Point* ptr=&point1;
	cout<<(*ptr).x<<endl;
	return 0;
}




