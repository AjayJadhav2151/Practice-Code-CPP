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
	complex operator+(complex&);
	complex operator-(complex&);
	complex operator*(complex&);
	complex operator/(complex&);
	complex operator++();
	complex operator--();
	complex operator++(int);
	complex operator--(int);
	bool operator<(complex&);
	bool operator>(complex&);
	bool operator==(complex&);
	bool operator!=(complex&);
	friend istream& operator>>(istream& in, complex& c);
	friend ostream& operator<<(ostream& out, complex& c);
	void accept();
	void display();
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
complex complex::operator*(complex& c)
{
	complex temp;
	temp.real = real * c.real;
	temp.img = img * c.img;
	return temp;
}
complex complex::operator/(complex& c)
{
	complex temp;
	temp.real = real / c.real;
	temp.img = img / c.img;
	return temp;
}
complex complex::operator++()
{
	complex temp;
	temp.real = ++real;
	temp.img = ++img;
	return temp;
}
complex complex::operator--()
{
	complex temp;
	temp.real = --real;
	temp.img = --img;
	return temp;
}
complex complex::operator++(int i)
{
	complex temp;
	temp.real = real++;
	temp.img = img++;
	return temp;
}
complex complex::operator--(int i)
{
	complex temp;
	temp.real = real--;
	temp.img = img--;
	return temp;
}
bool complex:: operator<(complex& c)
{
	if (this->real < c.real)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool complex:: operator>(complex& c)
{
	if (this->real > c.real)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool complex:: operator==(complex& c)
{
	if (this->real == c.real)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool complex:: operator!=(complex& c)
{
	if (this->real != c.real)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

istream& operator>>(istream& in, complex& c)
{
	cout << "Enter the real and img values: " << endl;
	in >> c.real >> c.img;
	return in;
}
ostream& operator<<(ostream& out, complex& c)
{
	cout <<c.real<<"+"<<c.img<<"i"<< endl;
	return out;
}

int main()
{
	complex c1(2, 4);
	complex c2(2, 6);
	complex c3,c4;

	//c3 = c1 + c2;
	//c3 = c1 - c2;
	//c3 = c1 * c2;
	//c3 = c1 / c2;
	//c3 = ++c1;
	//c3 = --c1;
	//c3 = c1++;x
	//c3 = c1--;
	//c3.display();

	/*if (c1 < c2)
	{
		cout << "real c1 is smaller than real c2" << endl;
	}
	else if (c1 > c2)
	{
		cout << "real c1 is grether than real c2" << endl;
	}
	else
	{
		cout << "real c1 is equal than real c2" << endl;
	}*/

	//if (c1 != c2)
	//{
	//	cout << "C1 and C2 are NOT equal" << endl;
	//}
	//else
	//{
	//	cout << "C1 and C2 are equal" << endl;
	//}

	cin >> c4;
	cout << c4;
}
