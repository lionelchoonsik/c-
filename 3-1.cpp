#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	Circle circle1;
	Circle circle2(5.0);

	cout << "circle1: " << circle1.getArea() << endl;
	cout << "circle2: " << circle2.getArea() << endl;

	/*circle2.radius = 100;
	cout << "circle2. radius: " << circle2.getArea() << endl;*/

	circle2.setRadius(100);
	cout << "the area of the circle of radius" << circle2.getRadius() << " is " << circle2.getArea() << endl;

	return 0;
}