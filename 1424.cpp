#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
#include <map>


using std::cout;
using std::cin;

int main(){
	std::multimap<std::string,int> position;
	std::string word;
	int pos=0;
	while(cin>>word){
		position.insert({word,pos});
		++pos;
	}
	for(auto [word,pos]:position){
		cout<<word<<" "<<pos<<"\n";
	}
	return 0;
}

