#include <iostream>
#include <utility>
#include <string>

using std::cout;
using std::cin;
using std::endl;

enum class Color{
		Black,
		Red,
		White
};

struct Point{
		double x=0.0;
		double y=0.0;
		double z=0.0;
		Color color;
};

int main(){
	std::pair<std::string,int> p={"Hello",52};
	auto[worg,freg]=p;
	cout<<freg<<" "<<worg<<endl;
	return 0;
}
