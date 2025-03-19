#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class point {
	int x, y;
public:
	point();
	void setpoint(int,int);
	void showpoint();
};
point::point() {
	x = 0;
	y = 0;
}

void point::setpoint(int xval, int yval) {
	x = xval;
	y = yval;
}

void point::showpoint() {
	cout << "[" << x << "," << y << "]" << endl;
}
int main() {
	point p;
	p.setpoint(10,20);
	p.showpoint();

}