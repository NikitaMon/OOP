#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>


#include "Figure.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


	//задано в таком виде чтобы данные при ошибке были из конструктора по умолчанию
	//если объявить по другому то будет ошибка в строках 35-42 обращение к несуществующим элементам
	Figure:Triangle a[1];//создание массива класса

	int x = 0;
	int y = 0;
	cout << "введите сторону X: ";
	cin >> x;
	cout << "введите сторону Y: ";
	cin >> y;
	//присвоение им различных значений и проверка
	try {
		if (x == y)
			a[0] = Triangle(x);
		else
			a[0] = Triangle(x,y);
	}
	catch (invalid_argument& e) {
		cout << "a[0]" << endl;
		cout << e.what() << endl;
	}

	cout << endl;

	for (int i = 0; i < 1; i++)
	{
		cout << "Номер " << i << endl;
		cout << a[i].getName() << endl;
		cout << "Стороны равны " << a[i].getX() << ", " << a[i].getY() << ", " << a[i].getZ() << endl;
		cout << "Площадь равна " << a[i].area() << endl;
		cout << "Периметр равен " << a[i].perimeter() << endl << endl;
	}

	return 0;
}