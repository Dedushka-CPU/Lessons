#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

struct Point{
	double x,y,z;
};

int main(){
	int x=52;
	int y=42;
	int* ptr;
	ptr=nullptr;
	ptr=&y;
	cout<<*ptr<<endl;
	ptr=&x;
	cout<<*ptr<<endl;
	return 0;
}



