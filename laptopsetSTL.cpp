#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
#include<cstring> 
using namespace std;

class laptop
{
	int lid;
	char make[20];
	double cost;
public:
	laptop();
	laptop(int , const char*, double);
	void show() const;
	bool operator<(const laptop l) const;
};
bool laptop::operator<(const laptop l) const
{
	return cost < l.cost;
}
laptop::laptop() {
	lid = 0;
	strcpy(make, "NA");
	cost = 0.0;
}
laptop::laptop(int id, const char* m, double c)
{
	lid = id; 
	strcpy(make, m);
	cost = c;
}
void laptop::show() const
{
	cout << lid << " " << make << " " << cost << endl;
}
int main()
{
	set<laptop> s1;
	s1.insert(laptop(101, "Dell", 45000));
	s1.insert(laptop(102, "Hp", 55000));
	s1.insert(laptop(103, "Lenovo", 45000)); //same data not print
	s1.insert(laptop(104, "Apple", 95000));

	set<laptop>::iterator itr;
	for (itr = s1.begin(); itr != s1.end(); itr++)
	{
		(*itr).show();
	}
	return 0;
}