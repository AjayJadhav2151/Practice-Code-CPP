#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Calculator
{
	int num1, num2;
public:
	void Accept_values();
	void Display_values();
	int Addition();
	int Subtraction();
	int Multiplication();
	int Division();
};

void Calculator::Accept_values()
{
	cout << "Enter number for performing Opeartion" << endl;
	cout << "Enter 1st number" << endl;
	cin >> num1;
	cout << "Enter 2nd number" << endl;
	cin >> num2;
}
int Calculator::Addition()
{
	return num1 + num2;
}

int Calculator::Subtraction()
{
	return num1 - num2;
}
int Calculator::Multiplication()
{
	return num1 * num2;
}
int Calculator::Division()
{
	if (num1 != 0 && num2 != 0) {
	return num1 / num2;
	}
	else
	{
		cout << "Enter non-zero Values" << endl;
	}
}
void Calculator::Display_values()
{
	cout << "Addition is: " << Addition() << endl;
	cout << "Subtraction is: " << Subtraction() << endl;
	cout << "Multiplication is: " << Multiplication() << endl;
	cout << "Division is: " << Division() << endl;
}

int main()
{
	Calculator c1;
	c1.Accept_values();
	c1.Display_values();
}