#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>

using namespace std;

class Account
{
	int accno;
	char name[20];
	float balance;
	static int GenAcc;
	static float int_rate;
public:
	Account();
	Account(const char*, float);
	static void updateIntRate(float NewRate);
	void display();
};
int Account::GenAcc = 0;
float Account::int_rate = 3.5f;

void Account::updateIntRate(float newRate)
{
	int_rate = newRate;
}
Account::Account()
{
	GenAcc++;
	accno = GenAcc;
	strcpy(name, "NA");
	balance = 0;
}
Account::Account(const char* n, float bal)
{
	GenAcc++;
	accno = GenAcc;
	strcpy(name, n);
	balance = bal;
}

void Account::display()
{
	float balanceWithInterest = balance + (balance * int_rate / 100);
	cout << "Account number is: " << accno << "\n" << "Account holder Name is " << name << "\n"
		<< "Account balance is: " << balance<<"\n"<<"Interest Rate: "<<int_rate<<"\n"
		<<"Balance with Interest: "<<balanceWithInterest << endl;
}

int main()
{
	//Account a1;
	//a1.display();

	Account a2("Ajay",255663);
	a2.display();

	Account a3("Push",244773);
	a3.display();

	cout << "Before Updating Interest Rate:\n";
	a2.display();
	a3.display();

	Account::updateIntRate(5.0f);

	cout << "After Updating Interest Rate:\n";
	a2.display();
	a3.display();
}