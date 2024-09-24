#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*int Max(int x,int y){
	if(x>y){return x;}
	else{return y;}
	}*/
	
template<typename T> T Max(const T &x,const T &y){
	if(x>y){return x;}
	else{return y;}
}

template<typename T>  const std::vector<T>& Max(const std::vector<T>&v1,const std::vector<T>& v2){
		if(v1.size()>v2.size()){
			return v1;
		}else if(v1.size()<v2.size()){
				return v2;
		}else if(v1>v2){
				return v2;
		}else{
				return v1;
		}
}
		
int main(){
	cout<<Max(1,5)<<"\n";
	cout<<Max<double>(1.584,5.2185)<<"\n";
	string word1="Hello";
	string word2="word";
	cout<<Max(word1,word2)<<"\n";
	
	std::vector <int> v1{1,2,8,4};
	std::vector <int> v2{0,52,52,52};
	for(const int x:Max(v1,v2)){
			cout<<x<<" ";
	}
  return 0;
 }


