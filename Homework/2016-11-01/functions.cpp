//Defination of member functions
//functions.cpp
#include<iostream>
#include"header.h"
using namespace std;
Date::Date(int m,int d,int y){
	Date::month=m;
	Date::day=d;
	year=y;
}
Time::Time(int s,int m,int h){
	hour=h;
	minute=m;
	sec=s;
}
void Display(Date & D){
	cout<<D.month<<"/"<<D.day<<"/"<<D.year<<endl;
}
void Display(Time & T){
	cout<<T.hour<<":"<<T.minute<<":"<<T.sec<<endl;
}
