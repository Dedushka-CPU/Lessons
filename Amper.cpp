#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main(){
	std::string s1="Hello, Watson";
	std::string& s2=s1;
	s1.clear();
	cout<<s2.size()<<endl;
	int x=52;
	int& ref=x;
	cout<<ref<<endl;
	++x;
	cout<<ref<<endl;
	return 0;
}

