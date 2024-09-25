#include <iostream>
#include <list>

using std::cout;
using std::cin;

int main(){
	std::list <int> l{55,52,85,58,5};
	/*auto iter=l.end();
	cout<<*iter<<"\n";
	++iter;
	cout<<*iter<<"\n";
	--iter;
	cout<<*iter<<"\n";
	for(size_t i=0;i!=l.size();i++){
		cout<<*iter<<" ";
		++iter;	
	}*/
	for(auto iter=l.begin();iter!=l.end();++iter){
		cout<<*iter<<" ";
	} 
	cout<<"\n";
	for(auto iter=l.rbegin();iter!=l.rend();++iter){
		cout<<*iter<<" ";
	} 
	return 0;
}


