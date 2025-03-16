#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class date {
	int day;
	int month;
	int year;
public:
	void setdata(int d, int m, int y);
	void Display();
	date();
	date(int);
};

date::date()
{
	day = 1;
	month = 1;
	year = 1;
}
date::date(int a)
{
	day = a;
	month = a;
	year = 2024;
}
void date::setdata(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}
void date::Display() {
	cout << day << "/" << month << "/" << year << endl;
}
int main() {
	date d, d1(5), d2;
	d2.Display();
	
	d.setdata(8, 11, 2001);
	d.Display();

	d1.Display();
}