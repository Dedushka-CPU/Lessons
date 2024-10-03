#include <iostream>
#include <queue>


using std::cout;
using std::cin;

int main(){
	std::queue<int> s;
	s.push(1);
	s.push(6);
	cout<<s.front()<<"\n";
	cout<<s.back()<<"\n";
	s.pop();
	return 0;
}


