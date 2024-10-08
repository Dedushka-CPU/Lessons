#include <iostream>
#include "time.h"

using std::cout;

bool IsAftermonTime(const chron::Time& time){
	return time.GetHours()>=12;
}

int main(){
	chron::Time t(15,30,0);
	cout<<t.GetHours()<<"\n";
	if(IsAftermonTime(t)){
		cout<<t.GetHours()-12<<" PM\n";
	}
	return 0;
}
