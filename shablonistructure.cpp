#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <utility>

using std::cout;
using std::cin;
using std::endl;
using std::string;

template<typename T1,typename T2,typename T3> struct Triple{
		T1 first;
		T2 second;
		T3 three;
};

int main(){
	Triple<int,int,int> point{1,52,-156};
	Triple<std::string,std::string,int> wordPairs{"hello","koniciva",52};
	cout<<wordPairs.first<<wordPairs.second<<wordPairs.three;
	cout<<"\n";
	cout<<point.first<<point.second<<point.three;
	return 0;
 }


