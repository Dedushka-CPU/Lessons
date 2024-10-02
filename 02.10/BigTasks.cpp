#include <iostream>
#include <string>
#include <deque>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>
#include <list>
#include <iterator>

using std::cout;
using std::cin;

int main(){
	std::vector<int> m1{1,3,5,5,7};
	std::list<int> m2{5,5,6,7,8};
	std::deque<int> out;
	std::merge(
		m1.begin(),m1.end(),
		m2.begin(),m2.end(),std::back_inserter(out));
	for(auto el:out){
		cout<<el<<' ';  
	}
	cout<<"\n";
	out.clear();
	std::set_union(
		m1.begin(),m1.end(),
		m2.begin(),m2.end(),std::back_inserter(out));
	for(auto el:out){
		cout<<el<<' ';  
	}
	cout<<"\n";
	out.clear();
	std::set_intersection(
		m1.begin(),m1.end(),
		m2.begin(),m2.end(),std::back_inserter(out));
	for(auto el:out){
		cout<<el<<' ';  
	}
	cout<<"\n";
	out.clear();
	std::set_difference(
		m1.begin(),m1.end(),
		m2.begin(),m2.end(),std::back_inserter(out));
	for(auto el:out){
		cout<<el<<' ';  
	}
	cout<<"\n";
	out.clear();
	std::set_symmetric_difference(
		m1.begin(),m1.end(),
		m2.begin(),m2.end(),std::back_inserter(out));
	for(auto el:out){
		cout<<el<<' ';  
	}
	return 0;
}


