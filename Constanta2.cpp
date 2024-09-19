#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;



int main(){
	const std::vector<int> v={1,2,5,94,15,52,547,8};
	cout<<v.size()<<endl;
	
	
	int x=52;
	int& ref=x;
	const int& cref=x;
	x++;
	ref++;
	//cref++; Error
	
	int* ptr=&x;
	const int* cptr=&x;
	x++;
	*ptr++;
	//cptr++;Error
	 
	return 0;
}





