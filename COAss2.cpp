#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Box {
	int height, width, depth;
public:
	Box();
	void setHeight(int h);
	void setWidth(int w);
	void setDepth(int d);
	void Display();
};
Box::Box() {
	height = 0;
	width = 0;
	depth = 0;
}
void Box::setHeight(int h) {
	height = h;
}
void Box::setWidth(int w) {
	width = w;
}
void Box::setDepth(int d) {
	depth = d;
}
void Box::Display() {
	cout << "Box Height is:" << height << "\nBox Width is:" << width << "\nBox Depth is:" << depth << endl;
}

int main() {
	Box b1;
	b1.setHeight(5);
	b1.setWidth(10);
	b1.setDepth(5);
	b1.Display();
}