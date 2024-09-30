#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>

using std::cout;
using std::cin;

int main(){
	std::map<int,std::string> numbers{
		{100,"sto"},
		{1,"ADIN"},
		{2,"DVA"},
		{5,"PAT"},
		{7,"SEM"}
	};
	auto iter=numbers.find(100);
	if(iter!=numbers.end()){
		const auto&[key,value]=*iter;
		cout<<"Found:"<<key<<" Value:"<<value<<"\n";
	
		if(iter!=numbers.begin()){
			const auto&[key,value]=*std::prev(iter);
			cout<<"Previsons "<<key<<" Value "<<value<<"\n";
		}else{
			cout<<"No previous number\n";
		}
		if(auto nextIter=std::next(iter);nextIter!=numbers.end()){
			const auto&[key,value]=*std::next(iter);
			cout<<"Most "<<key<<" Value "<<value<<"\n";
		}else{ cout<<"No next element\n";}
	}else{
		cout<<"Not Found\n";
		}
	return 0;
}

