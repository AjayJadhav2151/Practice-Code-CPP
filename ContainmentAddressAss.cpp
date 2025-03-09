#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class address
{
	int flatno;
	char area[20];
	char city[20];
	char state[20];
public:
	address();
	address(int, const char*, const char*, const char*);
	void display();
};

address::address()
{
	flatno = 111;
	strcpy(area, "Manjari");
	strcpy(city, "Pune");
	strcpy(state, "Maharastra");
}
address::address(int n, const char* a, const char* c, const char* s)
{
	flatno = n;
	strcpy(area, a);
	strcpy(city, c);
	strcpy(state, s);
}
void address::display()
{
	cout << "Flat Number is: " << flatno << "\n" << "Area is: " << area 
		<< "\n" << "City is: " << city << "\n" << "State is: "<< state << endl;
}

class student
{
	int rollno;
	char name[20];
	address add;
public:
	student();
	student(int, const char*, int, const char*, const char*, const char*);
	void show();
};

student::student()
{
	rollno = 1;
	strcpy(name, "Ajay");
}
student::student(int id, const char* nam,int n, const char* a, const char* c, const char* s):add(n,a,c,s)
{
	rollno = id;
	strcpy(name, nam);
}
void student::show()
{
	cout << "Rollno: " << rollno << "\n" << "Name is: " << name << endl;
	add.display();
}

int main()
{
	student s1(1,"ajay",803,"Manjari","Pune","Maharastra");
	s1.show();
	return 0;
}

