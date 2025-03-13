#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Point
{
	int x, y;
public:
	void SetPoint(int, int);
	void ShowPoint();
};

void Point::SetPoint(int a, int b)
{
	x = a;
	y = b;
}
void Point::ShowPoint()
{
	cout << "[" << x << "," << y << "]" << endl;
}

int main()
{
	Point p1;
	p1.SetPoint(10, 20);
	p1.ShowPoint();
}