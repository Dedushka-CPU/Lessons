#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>
#include <set>

using std::cout;
using std::cin;

int main(){
	/*std::vector<int> data{1,2,5,228,69,52,-9,8,8,8,8,8};*/
	/*std::sort(data.begin()+2,data.end()-1);*/
	//int couter=0;
	/*for(auto el:data){
		if(el==8){
			++couter;
		}
	}*/
	//cout<<std::count(data.begin(),data.end(),8);
	std::deque<int> data{8,2,5,228,69,52,-9,8,8,8,8,8};
	auto iter1=std::find(data.begin(),data.end(),69);
	cout<<(iter1-data.begin())<<"\n";
	auto start=data.begin();
	auto end=start+5;
	auto iter2=std::find(start,end,2);
	if(iter2==end){
		cout<<"No such this el\n";
	}else{
		cout<<(iter2-data.begin())<<"\n";
	}
	return 0;
}
