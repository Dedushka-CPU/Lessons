#include <iostream>
#include <string>
#include <vector>
#include <string_view>

using std::cout;
using std::cin;

int main(){
	/*std::string s {"Hello JavaScript"};
	auto sub=s.substr(7);
	sub[0]='Y';
	cout<<sub<<"\n";
	cout<<s<<"\n";*/
	
	/*std::string s{"Hello JavaScript!How do you do?"};
	std::string_view sv=s;
	sv.remove_prefix(6);
	sv.remove_suffix(16);
	cout<<sv<<"\n";
	cout<<s<<"\n";*/
	
	std::vector<std::string_view> lines;
	for(int i=0;i!=5;++i){
		std::string line;
		std::getline(cin,line);
		lines.push_back(line);
	}
	
	for(auto item:lines){
		cout<<item<<"\n";
	}
	
	return 0;
}



