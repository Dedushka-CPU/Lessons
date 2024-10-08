#include "time.h"

using namespace chron;

Time::Time(int h,int m,int s){
	if(s<0|| s>59){
		
	}
	if(m<0 || m>59){
		
	}
	if(h<0){
		
	}
	hours=h;
	minutes=m;
	seconds=s;
}

int Time::GetMinutes() const{
	return minutes;
}
int Time::GetHours() const{
	return hours;
}
int Time::GetSeconds() const{
	return seconds;
}
