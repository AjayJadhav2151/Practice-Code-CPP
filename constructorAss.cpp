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
	int getReal();
	void setreal(int);
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
	cout << "Real value and " <<  "Imaginary value is:" << real << "+" << img<<"i" << endl;
}
int complex::getReal()
{
	return real;
}
void complex::setreal(int r)
{
	real = r;
}

int main()
{
	complex c1;
	c1.display();

	complex c2(12,24);
	c2.display();

	complex c3;
	c3.accept();
	c3.display();
	cout << "Real of c2 " << c2.getReal() << endl;
	c2.setreal(100);
	c2.display();
	return 0;
}