#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v1;

	v1.push_back(10);
	v1.push_back(2);
	v1.push_back(12);
	v1.push_back(18);
	v1.push_back(1);
	v1.push_back(28);
	v1.push_back(29);
	v1.push_back(28);

	sort(v1.begin(), v1.end());
	vector<int>::iterator itr;
	for (itr = v1.begin(); itr != v1.end(); itr++)
	{
		cout << *itr << " ";
	}
	cout << endl;

	vector<int>::iterator it1 = min_element(v1.begin(), v1.end());
	cout << "Minimum value from vector: " << *it1 << endl;

	vector<int>::iterator it2 = max_element(v1.begin(), v1.end());
	cout << "Maximum value from vector: " << *it2 << endl;

	cout << endl;
}