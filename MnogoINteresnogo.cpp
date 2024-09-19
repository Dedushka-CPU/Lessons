#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

int main(){
	int x=52;
	const int cx=42;
	int* ptr=&x;
	const int* cptr=&x;
	cptr=&cx;
	int* const ptrc=&x;
	++*ptr;
	const int* const cptrc=&x;
	
	return 0;
}
