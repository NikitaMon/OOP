#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	Figure a[1];

	try//проверка значений
	{
		a[0].triangle(3, 4);
	}
	catch (invalid_argument& e)
	{
		cout << e.what() << endl;
	}

	cout << a[0].getName() << endl;
	cout << "Стороны равны " << a[0].getX() << ", " << a[0].getY() << ", " << a[0].getZ() << endl;
	cout << "Площадь равна " << a[0].getArea() << endl;
	cout << "Периметр равен " << a[0].getPerimetr() << endl << endl;

	return 0;
}


