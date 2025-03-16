#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class polygon
{
public:
	virtual double calcArea() = 0;
	virtual double calcPeri() = 0;
	virtual void display()=0;
	virtual ~polygon() {};
};
void polygon::display()
{
	cout << "Area of Polygon is: " << calcArea() << "\n"
		<< "Perimeter of Polygon is: " << calcPeri() << endl;
}
class circle : public polygon
{
	int radius;
public:
	circle();
	circle(int);
	double calcArea();
	double calcPeri();
	void display();
};

circle::circle()
{
	radius = 1;
}
circle::circle(int r)
{
	radius = r;
}
double circle::calcArea()
{
	return 3.142 * radius * radius;
}
double circle::calcPeri()
{
	return 2 * 3.142 * radius;
}
void circle::display()
{
	cout << "Circle Details:\n";
	cout << "Radius: " << radius << endl;
	polygon::display();
}
class rectangle :public polygon
{
	int len, bre;
public:
	rectangle();
	rectangle(int, int);
	double calcArea();
	double calcPeri();
	void display();
};

rectangle::rectangle()
{
	len = 1;
	bre = 2;
}
rectangle::rectangle(int l, int b)
{
	len = l;
	bre = b;
}
double rectangle::calcArea()
{
	return len * bre;
}
double rectangle::calcPeri()
{
	return 2 * (len + bre);
}
void rectangle::display()
{
	cout << "Rectangle Details:\n";
	cout << "Length: " << len << ", Breadth: " << bre << endl;
	polygon::display();
}

class square :public rectangle
{
public:
	square();
	square(int);
	double calcArea();
	double calcPeri();
	void display();
};

square::square()
{
}
square::square(int s):rectangle(s,s)
{
}
double square::calcArea()
{
	return rectangle::calcArea();
}
double square :: calcPeri()
{
	return rectangle::calcPeri();
}
void square::display()
{
	cout << "Square Details:\n";
	rectangle::display();
}

int main()
{
	polygon* ptr;
	
	ptr = new circle(5);
	ptr->display();

	cout << "-------------------\n";

	ptr = new rectangle(4, 5);
	ptr->display();

	cout << "-------------------\n";

	ptr = new square(4);
	ptr->display();

	delete ptr;
	return 0;
}