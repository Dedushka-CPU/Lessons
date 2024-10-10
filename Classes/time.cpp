#include "time.h"
#include <ostream>

using namespace chron;

/*Time::Time(int h, int m, int s)
{
	hours = h;
	minutes = m;
	seconds = s;
	Normalize();
}*/
Time::Time(int h, int m)
{}

int Time::GetHours() const
{
	return hours;
}
int Time::GetMinutes() const
{
	return minutes;
}
int Time::GetSeconds() const
{
	return seconds;
}
void Time::AddSeconds(int s){
	seconds+=s;
	Normalize();
}
void Time::AddMinutes(int s){
	minutes+=s;
	Normalize();
}
void Time::AddHours(int s){
	hours+=s;
	Normalize();
}
void Time::Normalize(){
	minutes += seconds/60;
	seconds %= 60;
	while(seconds < 0) {
		minutes-=1;
		seconds+=60;
	}
	while(minutes < 0)
	{
		hours-=1;
		minutes+=60;
	}
	
	if(minutes>=60){
		hours+=minutes/60;
		minutes=minutes%60;
	}
	if(hours>=24){
		hours=hours%24;
	}
}
int Time::TotalSeconds()const{
	return seconds+minutes*60+hours*3600;
}
Time& Time::operator+=(int s){
	seconds+=s;
	Normalize();
	return *this;
}

Time Time::operator +(int s)const{
	return Time(hours,minutes,seconds+s);
}
std::ostream& operator<<(std::ostream& out,const chron::Time& t ){
		out<<t.GetHours()<<":"<<t.GetMinutes()<<":"<<t.GetSeconds();
		return out;
}

