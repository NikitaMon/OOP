#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

Figure:Triangle a[5];

	try {
		a[0] = Triangle(3, 4);
	}
	catch (invalid_argument& e) {
		cout << "a[0]" << endl;
		cout << e.what() << endl;
	}

	try {
		a[1] = Triangle(0);
	}
	catch (invalid_argument& e) {
		cout << "a[1]" << endl;
		cout << e.what() << endl;
	}

	try {
		a[2] = Triangle(0, 3);
	}
	catch (invalid_argument& e) {
		cout << "a[2]" << endl;
		cout << e.what() << endl;
	}

	try {
		a[3] = Triangle(5);
	}
	catch (invalid_argument& e) {
		cout << "a[3]" << endl;
		cout << e.what() << endl;
	}

	try {
		a[4] = Triangle(5, -4);
	}
	catch (invalid_argument& e) {
		cout << "a[4]" << endl;
		cout << e.what() << endl;
	}
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Номер " << i << endl;
		cout << a[i].getName() << endl;
		cout << "Стороны равны " << a[i].getX() << ", " << a[i].getY() << ", " << a[i].getZ() << endl;
		cout << "Площадь равна " << a[i].area() << endl;
		cout << "Периметр равен " << a[i].perimeter() << endl << endl;

	}

	return 0;
}