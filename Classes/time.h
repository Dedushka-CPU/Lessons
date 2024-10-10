#include <ostream>
#ifndef TIME_H
#define TIME_H
namespace chron {
	class Time {
	private:
		int hours=0;
		int minutes=0;
		int seconds=0;
		void Normalize();
	public:
		Time()=default;
		Time(int h, int m, int s):hours(h),minutes(m),seconds(s) {Normalize();}
		Time(int h, int m);
		Time(int s):Time(0,0,s){};
		int GetHours() const;
		int GetMinutes() const;
		int GetSeconds() const;
		void AddSeconds(int s);
		int TotalSeconds()const;
		void AddHours(int h);
		void AddMinutes(int s);
		Time& operator+=(int s);
		Time operator+(int s)const;
		
	};
}
int operator-(const chron::Time& t1,const chron::Time& t2);
std::ostream& operator<<(std::ostream& out,const chron::Time& t );

#endif //TIME_H
