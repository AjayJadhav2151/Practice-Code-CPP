#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class products
{
	char* product_name;
	int product_code;
	float unit_price;
public:
	products();
	products(const char*, int, float);
	products(products&);
	~products();
	void display();
};
products :: products()
{
	product_name = new char[5];
	strcpy(product_name,"NA");
	product_code = 0;
	unit_price = 0;

}
products :: products(const char* n, int c, float p)
{
	product_name = new char[strlen(n) + 1];
	strcpy(product_name, n);
	product_code = c;
	unit_price = p;
}
products :: products(products& p)
{
	product_name = new char[strlen(p.product_name)+1];
	strcpy(product_name, p.product_name);
	product_code= p.product_code;
	unit_price= p.unit_price;
}
products :: ~products()
{
	delete[] product_name;
}
void products::display()
{
	cout <<"product_name is: " << product_name << endl;
	cout <<"product_code is: " << product_code << endl;
	cout <<"unit_price is: " << unit_price << endl;
}
int main()
{
	products p1;
	p1.display();

	products p2("laptop",101,120000);
	p2.display();

	products p3(p2);
	p3.display();
}