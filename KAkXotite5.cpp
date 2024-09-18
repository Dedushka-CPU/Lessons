#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main(){
	std::string s1="Elementary, Watson.";
	std::string s2=s1;
	s1.clear();
	cout<<s1<<endl;
	cout<<s2<<endl;	
	return 0;
}
