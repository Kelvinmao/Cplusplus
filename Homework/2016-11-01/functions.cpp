//Defination of member functions
//functions.cpp
#include<iostream>
#include"header.h"
using namespace std;
Date::Date(int m,int d,int y){
	m_month=m;
	m_day=d;
	m_year=y;
}
Time::Time(int s,int m,int h){
	m_hour=h;
	m_minute=m;
	m_sec=s;
}
void Display(Date & D){
	cout<<D.m_month<<"/"<<D.m_day<<"/"<<D.m_year<<endl;
}
void Display(Time & T){
	cout<<T.m_hour<<":"<<T.m_minute<<":"<<T.m_sec<<endl;
}
