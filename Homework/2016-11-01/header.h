//declaration of class
//header.h
#ifndef HEADER_H_
#define HEADER_H_

class Date{
	int month;
	int day;
	int year;
	public:
		Date(int,int,int);
		friend void Display(Date &);
};

class Time{
	int hour;
	int minute;
	int sec;
	public:
		Time(int,int,int);
		friend void Display(Time &);
};
void Display(Date &,Time &);
#endif
