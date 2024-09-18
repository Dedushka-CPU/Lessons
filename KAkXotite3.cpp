#include <iostream>
#include <tuple>

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
	std::tuple <int,double,Point> t={5,258.54,{.color=Color::Black}};
	cout<<std::get<0>(t)<<endl;
	cout<<std::get<1>(t)<<endl;
	cout<<std::get<2>(t).x<<endl;
	std::get<2>(t).color=Color::Red;
	return 0;
}
