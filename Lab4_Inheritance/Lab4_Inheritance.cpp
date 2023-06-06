#include <iostream>

#include "AbstractFigure.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	Triangle a;
	Circle c;
	Rectangle r;

	try {
		c = Circle(4);
		a = Triangle(3, 4);
		r = Rectangle(10, 5);
	}
	catch (invalid_argument& e) {
		cout << e.what() << endl;
	}

	cout << a.getName() << " " << a.getZ() << " " << a.perimeter() << " " << a.area() << endl;
	cout << c.getName() << " " << c.getR() << " " << c.perimeter() << " " << c.area() << endl;
	cout << r.getName() << " " << r.getX() << " " << r.perimeter() << " " << r.area() << endl;


	return 0;
}

