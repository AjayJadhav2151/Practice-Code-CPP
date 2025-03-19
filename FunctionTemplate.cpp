#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

template<typename T, typename U>
U add(T a, U b)
{
	return a + b;
}
int main()
{
	cout << add(1, 2.2) << endl;
	return 0;
}