#include <iostream>
#include <vector>
#include <utility>
#include <map>
#include <array>

using std::cout;
using std::cin;

int main(){
	std::array<double,5> point{1,5,2,5,52.52};
	for(double el:point){
		cout<<el<<" ";
	}
	return 0;
}
