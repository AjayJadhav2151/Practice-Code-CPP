#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>

using namespace std;
int main()
{
	map <int, const char*> m1;

	m1.insert(pair<int, const char*>(51, "Ravi"));
	m1.insert(make_pair<int, const char*>(24, "Kama"));
	m1[20] = "Jay";

	map <int, const char*>::iterator itr;

	for (itr = m1.begin(); itr != m1.end(); itr++)
	{
		cout << (*itr).first << " " << (*itr).second << endl;
	}
	return 0;


}