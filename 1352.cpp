#include <iostream>
#include <string>
#include <set>
#include <unordered_set>


using std::cout;
using std::cin;

int main(){
	std::unordered_set<std::string> words; 
	std::set<std::string> dublicate_words;
	std::string word;
	while(cin>>word){
		/*if(words.contains(word)){
				dublicate_words.insert(word);
		}else{
				words.insert(word);
		}	*/
		auto[inter,has_been_insered]=words.insert(word);
		if(!has_been_insered){
			dublicate_words.insert(word);
		}
	}
	for(const auto& word:dublicate_words){
			cout<<word<<"\n";
	}
	
	return 0;
}
