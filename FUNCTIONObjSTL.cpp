#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class A
{
public:
	void operator()()
	{
		cout << "Function object....." << endl;
	}
};

int main()
{
	A obj;
	obj();  //obj.operator()()
	return 0;
}