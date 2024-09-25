#include <iostream>
#include <vector>
#include <string>
#include <map>

using std::cout;
using std::cin;

int main(){
	/*std::map<std::string, int> yers{
		{"Moscow",402},
		{"Kiev",404},
		{"Rome",505}
		};
	for(const auto&[city,year]:yers){
		cout<<city<<" "<<year<<"\n";
	}*/
	/*std::map<std::string,int> data;
	std::string key;
	int value;
	while(cin>>key>>value){
		data[key]=value;
	}
	data.erase("hello");
	if(auto iter=data.find("test");iter!=data.end()){
			cout<<"Fond the key:"<<iter->first<<" with the value:"<<iter->second<<"\n";
	}else{
			cout<<"Not found";
	}*/
	std::map<std::string,int> fregs;
	std::string word;
	while(cin>>word){
		++fregs[word];
	}
	
	for(const auto&[word,freg]:fregs){
			cout<<word<<" "<<freg<<"\n";
	}
	return 0;
}



