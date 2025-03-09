#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstring>
#include <crtdbg.h>
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
	~user();
};

user::user()
{
	uid = 101;
	uname = new char[4];
	strcpy(uname, "XYZ");
}
user::user(int id, const char* n)
{
	uid = id;
	uname = new char[strlen(n) + 1];
	strcpy(uname, n);
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
user::~user() {
	delete[] uname;
}
 
int main()
{
	{
		user u1;
		u1.display();
		user u2(101, "ajay");
		u2.display();
		user u3;
		u3.accept();
		u3.display();
	}

	if (_CrtDumpMemoryLeaks()) 
	{
		cout << "Memory Leak" << endl;
	}
	else
	{
		cout << "No Memory Leak" << endl;
	}
	return 0;
}