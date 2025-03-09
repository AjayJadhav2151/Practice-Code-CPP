#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class date {
	int day;
	int month;
	int year;
public:
	void setdata(int d,int m,int y);
	void showdate();
};
void date::setdata(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}
void date ::showdate() {
	cout <<day<<"/"<<month<<"/"<<year<<"/"<< endl;
}
int main() {
	date d;
	d.setdata(8,11,2001);
	d.showdate();
}