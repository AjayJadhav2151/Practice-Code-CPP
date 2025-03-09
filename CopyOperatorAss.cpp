#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstring>
using namespace std;

class user
{
	int uid;
	char* uname;
public:
	user();
	user(int, const char*);
	void accept();
	void display();
	user& operator=(const user&);  //Copy Assignmant Operator "="
	~user();
};

user::user()
{
	uid = 101;
	uname = new char[4];
	strcpy(uname, "XYZ");
	cout << "Default" << endl;
}
user::user(int id, const char* n)
{
	uid = id;
	uname = new char[strlen(n) + 1];
	strcpy(uname, n);
	cout << "Parameterized" << endl;
}
void user::accept()
{
	cout << "\t\tEnter user details\t\t" << endl;
	cout << "Enter user Id:" << endl;
	cin >> uid;
	cout << "Enter user Name:" << endl;
	uname = new char[50];
	cin >> uname;
}
void user::display() {
	cout << "User is id: " << uid << "\n" << "User Name is: " << uname << endl;
}
user& user::operator=(const user& u)
{
	if (this == &u)
	{
		return *this;
	}
	else
	{
		uid = u.uid;
		uname = new char[strlen(u.uname) + 1];
		strcpy(uname, u.uname);
		return *this;
	}
	cout << "Operator=" << endl;
}
user::~user() {
	delete[] uname;
	cout << "Destructor" << endl;
}

int main()
{
		user u1(12,"test");
		//u1.display();
		user u2, u3;
		u2 = u1;  //u2.operator=(u1)
		u3 = u2 = u1;  //u3.operator=(u2.operator=(u1))
		u1.display();
		u2.display();
		u3.display();

		user u5(25, "ABC");
		u5 = u5;
		u5.display();
	return 0;
}