#include <iostream>
#include <functional>
#include <queue>
#include <vector>

using std::cout;
using std::cin;

int main(){
	std::priority_queue<int,std::vector<int>,std::greater <int>> pq;
	for(int x:{3,3,5,9,2,1,0,4,-5,1,8}){
		pq.push(x);
	}
	while(!pq.empty()){
			cout<<pq.top()<<" ";
			pq.pop();
	}
	return 0;
}



