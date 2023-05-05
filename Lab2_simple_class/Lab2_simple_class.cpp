#include <iostream>
#include "Class.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	Triangle a[1];
	
	
	try//проверка значений
	{
		a[0] = Triangle(3, 4);
	}
	catch (invalid_argument& e)
	{
		cout << e.what() << endl;
	}
	
	cout << a[0].getName() << endl;
	cout << "Стороны равны " << a[0].getX() << ", " << a[0].getY() << ", " << a[0].getZ() << endl;
	cout << "Площадь равна " << a[0].Area() << endl;
	cout << "Периметр равен " << a[0].Perimetr() << endl << endl;

	//продожение примера плохого гетера
	//и таким образом можно изменить значение приватной переменной с помощью гетера 
	//но если бы гетер возвращал константу то и изменение было бы невозможным
	double *x = &a[0].getXadr();
	*x = -100;
	cout << x << endl;
	cout << "Стороны равны " << a[0].getX() << ", " << a[0].getY() << ", " << a[0].getZ() << endl;
	
	return 0;
}


