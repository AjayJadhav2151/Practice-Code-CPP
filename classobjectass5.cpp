#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include<iostream>
using namespace std;

class product {
	char* product_name;
	int product_code;
	float unit_price;
public:
	product();
	product(const char* ch,int id,float pri);
	product(product& p);
	~product();
	void display();
};

product::product() {
	product_name = new char[3];
	strcpy(product_name, "NA");
	product_code = 0;
	unit_price = 0;
	cout << "Default constructor" << endl;
}
product::product(const char* ch, int id, float pri) {
	product_name = new char[strlen(ch) + 1];
	strcpy(product_name, ch);
	product_code = id;
	unit_price = pri;
	cout << "Parameterized constructor" << endl;
}

product::product(product& p) {
	product_name = new char[10];
	strcpy(product_name, p.product_name);
	product_code = p.product_code;
	unit_price = p.unit_price;
	cout << "Copy constructor" << endl;
}
product :: ~product() {
	delete[]product_name;
	cout << "destructor" << endl;
}
void product::display() {
	cout << "Data ::" << endl;
	cout << "Product Name is:" << product_name << endl;
	cout << "Product code is :" << product_code << endl;
	cout << "Unit price is:" <<unit_price<<endl;
}
int main() {
	product p1;
	p1.display();
	product p2("A", 101, 1000);
	p2.display();
	product p3(p2);
	p3.display();
}