#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main(){
	int x=52;
	int* ptr=&x;
	++x;
	cout<<*ptr<<endl;
	return 0;
}


