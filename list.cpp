#include <iostream>
#include <forward_list>
#include <iterator>

using std::cout;
using std::cin;

int main(){
	//std::list <int> l{0,10,15,20};
	/*auto iter=l.rbegin();
	cout<<*iter<<"\n";
	--iter;
	cout<<*iter<<"\n";
	++iter;
	cout<<*iter<<"\n";*/
	/*for(size_t i=0;i!=l.size();i++){
		cout<<*iter<<" ";
		++iter;	
	}*/
	/*for(auto iter=l.begin();iter!=l.end();++iter){
		cout<<*iter<<" ";
	} 
	cout<<"\n";
	for(auto iter=l.rbegin();iter!=l.rend();++iter){
		cout<<*iter<<" ";
	} */
	/*auto iter=l.begin();
	++iter;
	l.insert(iter,5);
	for(auto iter=l.begin();iter!=l.end();++iter){
		cout<<*iter<<" ";
	} 
	cout<<"\n";
	for(auto iter=l.begin();iter!=l.end();++iter){
		if(*iter%2==0){
			iter=l.erase(iter);
		}
	}
	for(auto iter=l.begin();iter!=l.end();++iter){
		cout<<*iter<<" ";
	} */
	/*auto iter=std::next(l.begin());
	cout<<*iter<<" ";
	std::advance(iter,2);
	cout<<*iter<<" ";
	*/
	std::forward_list<int> fl{0,10,15,20};
	fl.push_front(52);
	auto iter=std::next(fl.begin());
	iter=fl.erase_after(iter);
	iter=fl.insert_after(iter,4);
	for(int x:fl){
		cout<<x<<" ";
	}
	return 0;
}


