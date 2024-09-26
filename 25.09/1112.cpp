#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <unordered_map>
#include <map>

using std::cout;
using std::cin;

int main(){
	std::unordered_map<std::string,int> fregs;
	//fregs.reserve(3000000);
	std::string word;
	while(cin>>word){
		++fregs[word];
	}
	

	std::vector<std::pair<std::string,int>> SortedByFregs(
	fregs.begin(),
	fregs.end()
	);
	std::sort(SortedByFregs.begin(),SortedByFregs.end(),[](const auto& p1,const auto& p2){
		return std::tie(p2.second,p1.first)<std::tie(p1.second,p2.first);
		});
	for(const auto& el:SortedByFregs){
			cout<<el.second<<"-"<<el.first<<"\n";
	}
	return 0;
}



