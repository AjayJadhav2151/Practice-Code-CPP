#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
using namespace std;

int main()
{
	multiset<int> s1;
	s1.insert(12);
	s1.insert(6);
	s1.insert(10);
	s1.insert(10);
	s1.insert(10);
	s1.insert(1);
	s1.insert(178);

	multiset<int>::iterator it;
	for (it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	return 0;
	cout << endl;
}