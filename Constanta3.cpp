#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

int main(){
	const int x=52;
	//int& ref=x;Error
	const int& ref=x;
	const int* cref=&x;
//	cout<<x<<ref<<cref<<endl;
	return 0;
}






