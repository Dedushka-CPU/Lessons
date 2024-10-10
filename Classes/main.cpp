#include <iostream>
#include "time.h"

using std::cout;
using std::cin;

/*bool IsAftermonTime(const chron::Time& time){
	return time.GetHours()>=12;
}*/

int operator -(const  chron::Time& t2,const  chron::Time& t1){
	return t1.TotalSeconds()-t2.TotalSeconds();
}

int main(){
	/*chron::Time t(15,30,25);
	chron::Time t1(10,18,-5);
	chron::Time t2(25,10,42);
	chron::Time t3(856,59,61);
	chron::Time t4;
	cout<<t.GetHours()<<"\n";
	if(IsAftermonTime(t)){
		cout<<t.GetHours()-12<<" PM\n";
	}
	cout<<t1.GetHours()<<":"<<t1.GetMinutes()<<":"<<t1.GetSeconds()<<"\n";
	cout<<t2.GetHours()<<":"<<t2.GetMinutes()<<":"<<t2.GetSeconds()<<"\n";
	cout<<t3.GetHours()<<":"<<t3.GetMinutes()<<":"<<t3.GetSeconds()<<"\n";
	cout<<t4.GetHours()<<":"<<t4.GetMinutes()<<":"<<t4.GetSeconds()<<"\n";*/
	
	/*chron::Time t;
	chron::Time t1(9999999);*/
	//cout<<t1.GetHours()<<":"<<t1.GetMinutes()<<":"<<t1.GetSeconds()<<"\n";
	//cout<<t.GetHours()<<":"<<t.GetMinutes()<<":"<<t.GetSeconds()<<"\n";
	/*t1.AddSeconds(-56);
	t=+5;*/
	//cout<<t.GetHours()<<":"<<t.GetMinutes()<<":"<<t.GetSeconds()<<"\n";
	//cout<<t1.GetHours()<<":"<<t1.GetMinutes()<<":"<<t1.GetSeconds()<<"\n";
	
	//cout<<t<<"\n"<<t1<<"\n";
	/*while(1){
		for(int i=0;i<195000000;i++){
			
		}
		cout<<t<<"\n";
		t.AddSeconds(1);
	}*/
	chron::Time t(1,5,9);
	chron::Time t1;
	cin>>t1;
	cout<<t<<"\n";
	cout<<t1<<"\n";
	return 0;
	

}
