#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<stack>  
using namespace std;

int main()
{
	stack<int, vector<int>> s1;
	s1.push(12);
	s1.push(20);
	s1.push(123);
	cout << s1.top() << endl;
	s1.pop();
	cout << s1.top() << endl;
	s1.pop();
	cout << s1.top() << endl;
	s1.pop();
	return 0;

}