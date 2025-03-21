#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class complex
{
	int real;
	int img;
public:
	complex();
	complex(int, int);

	void accept();
	void display();
	complex operator+(complex&);
	complex operator-(complex&);
	complex operator-();
};

complex::complex()
{
	real = 0;
	img = 0;
}
complex::complex(int r, int i)
{
	real = r;
	img = i;
}
void complex::accept()
{
	cout << "Enter the Real and Imaginary" << endl;
	cin >> real >> img;
}
void complex::display()
{
	char ch;
	ch = (img >= 0) ? '+' : '-';
	cout << "Real value and " << "Imaginary value is:" << real << ch << abs(img) << "i" << endl;
}
complex complex::operator+(complex& c)
{
	complex temp;
	temp.real = real + c.real;
	temp.img = img + c.img;
	return temp;
}
complex complex::operator-(complex& c)
{
	complex temp;
	temp.real = real - c.real;
	temp.img = img - c.img;
	return temp;
}
complex complex::operator-()
{
	complex temp;
	temp.real = -1*real;
	temp.img = -1*img;
	return temp;
}


int main()
{
	complex c1(12,24);
	complex c2(1, 2);
	complex c3;

	//c3 = c1 + c2; //c3=c1.operator+(c2)
	//c3 = c1 - c2; //c3=c1.operator-(c2)
	c3 = -c1; //c3=c1.operator-(c2)

	c3.display();

	return 0;
}