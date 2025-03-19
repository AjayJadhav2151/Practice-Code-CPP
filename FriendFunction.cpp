#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class test
{
	int i;
public:
	friend void fun();
};

void fun()
{
	test obj;
	obj.i = 10;
	cout << "Value of i inside fun(): " << obj.i << endl;
}
int main()
{
	fun();

	return 0;
}