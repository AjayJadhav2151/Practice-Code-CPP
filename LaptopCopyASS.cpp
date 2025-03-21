#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class laptop
{
	int lid;
	char make[20];
	double cost;
public:
	laptop();
	laptop(int, const char*, double);
	int operator>(laptop&);
	int operator==(laptop&);
	laptop operator!();
	void display();
};

laptop::laptop()
{
	lid = 0;
	strcpy(make, "NA");
	cost = 0;
}
laptop::laptop(int id, const char* m, double c)
{
	lid = id;
	strcpy(make, m);
	cost = c;
}
int laptop :: operator>(laptop& l) {
	if (this->cost > l.cost)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int laptop::operator==(laptop& l)
{
	if (this->cost == l.cost)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
laptop laptop::operator!() 
{
	laptop temp; 
	if (lid != 0) {
		temp = laptop(0, "Unknown", 0.0); 
	}
	else {
		temp = *this; 
	}
	return temp;
}
void laptop::display()
{
	cout << "Laptop ID: " << lid << "\nBrand: " << make << "\nCost: " << cost << "\n" << endl;
}

int main()
{
	laptop l1(1, "Dell", 45000), l2(2, "Hp", 50000), l3(3, "Asus", 45000),l4;

	if (l1 > l2)
	{
		cout << "L1's cost is greater than L2's cost" << endl;
	}
	else
	{
		cout << "L2's cost is greater than L1's cost" << endl;
	}
	if (l1 == l3)
	{
		cout << "Same" << endl;
	}
	else
	{
		cout << "Different" << endl;
	}
	l4 =! l1;
	l4.display();
}