#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class student
{
	int rollno;
	char name[20];
	static int temp;
public:
	student();
	student(const char*);
	void show();
};

int student::temp = 100;
student::student()
{
	rollno = 0;
	strcpy(name, "NOTSET");
}
student::student(const char* n)
{
	rollno = temp++;
	strcpy(name, n);
}

void student::show()
{
	cout << "Student Roll Number is: " << rollno << "\n"<<"Student Name is:" << name << endl;
}

int main()
{
	student s1("Jay"), s2("Amit"), s3("Ajay");
	s1.show();
	s2.show();
	s3.show();

	return 0;
}