//declaration of class
//header.h
#ifndef HEADER_H_
#define HEADER_H_

class Date{
	int m_month;
	int m_day;
	int m_year;
	public:
		Date(int,int,int);
		friend void Display(Date &);
};

class Time{
	int m_hour;
	int m_minute;
	int m_sec;
	public:
		Time(int,int,int);
		friend void Display(Time &);
};
void Display(Date &,Time &);
#endif
