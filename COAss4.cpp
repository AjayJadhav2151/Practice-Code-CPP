#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Complex
{
	int real, img;
public:
	Complex();
	Complex(int, int);
	void setreal(int);
	int getreal();
	void setimg(int);
	int getimg();
	void display();
};
Complex::Complex() {
	real = 0;
	img = 0;
}
Complex::Complex(int r, int i) {
	real = r;
	img = i;
}
int Complex::getreal() {
	return real;
}
int Complex::getimg() {
	return img;
}
void Complex::setreal(int r) {
	real = r;
}
void Complex::setimg(int i) {
	img = i;
}

void Complex :: display()
{
	cout << real << "+" << img << "i" << endl;
}

int main()
{
	Complex c1,c2(3,4);
	c1.display();
	c2.display();

	c1.setreal(5);
	c1.setimg(7);
	c1.display();

	cout << "Get values is: " << c2.getreal() << "  " << c2.getimg() << endl;
}