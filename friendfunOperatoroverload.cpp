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

	friend istream& operator>>(istream& cin, complex& c);
	friend ostream& operator<<(ostream& cout, complex& c);
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
	cout << "Real value and " << "Imaginary value is:" << real << "+" << img << "i" << endl;
}
istream& operator>>(istream& cin, complex& c)
{
	cout << "Enter real & img of complex num:" << endl;
	cin >> c.real >> c.img;
	return cin;
}
ostream& operator<<(ostream& cout, complex& c) {
	cout << c.real << "+" << c.img << "i" << endl;
	return cout;
}
int main()
{
	complex c1, c2, c3, c4;
	cin >> c1; //operator>>(cin,c1)
	cout << c1; //operator<<(cout, c1)
	cin >> c1 >> c2; //operator>>(operator>>(cin,c1),c2)
	cout << c1 << c2; //operator<<(operator<<(cout,c1)c2)
	return 0;
}