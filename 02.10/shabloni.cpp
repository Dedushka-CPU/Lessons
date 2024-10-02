#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <algorithm>

using std::cout;
using std::cin;

int main(){
	/*std::map<int,int> m{
		{12,2},
		{52,5},
		{5,12},
		{2,58},
		{654,8888888}
	};
	auto it1=m.find(12);
	//auto it2=std::find(m.begin(),m.end(),12); 404
	std::pair<const int,int> value(12,1);
	auto it3=std::find(m.begin(),m.end(),value);*/
	
	std::string s="Google Pixel";
	cout<<std::count_if(
		s.begin(),
		s.end(),
		[](char c){return 'A'<=c && c<='Z';})<<"\n";
	
	return 0;
}
