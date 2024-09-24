#include <iostream>
#include <map>
#include <vector>
#include <utility>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

int main(){
	std::map <int,std::pair<int,int>> coords;
	int cool;
	int gep;
	cin>>cool;
	int x,y;
	for(int i=0;i<cool;i++){
		cin>>x;
		cin>>y;
		gep=x*x+y*y;
		coords.insert({gep,{x,y}});
	}
	for(const auto& pair:coords){
		cout<<"Rasstoyanie:"<<pair.first<<" Koord:";
		cout<<pair.second.first<<" "<<pair.second.second<<"\n";
		}
  return 0;
 }

