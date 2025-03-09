#define _CRT_SERURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Test
{
public:
	Test()
	{
		cout << "Default Constructor" << endl;
	}
	Test(int i)
	{
		cout << "Parameterized Constructor" << endl;
	}
	Test(Test& t)
	{
		cout << "Copy Constructor" << endl;
	}
	~Test()
	{
		cout << "Destructor" << endl;
	}
};
void fun(Test& t)
{
	cout << "Function fun" << endl;
}

int main()
{
	Test t1;
	fun(t1);
	return 0;
}