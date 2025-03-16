#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include<iostream>
using namespace std;

template<typename T>
void myswap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10, b = 20;
	myswap(a, b);
	cout << a << " " << b << endl;

	char c1 = 'a', c2 = 'b';
	myswap(c1, c2);
	cout << c1 << " " << c2 << endl;

	const char* s1 = "CDAC", *s2 = "ACTS";
	myswap(s1, s2);
	cout << s1 << " " << s2 << endl;

	return 0;
}