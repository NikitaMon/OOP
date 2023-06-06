//Автор - Монастыршин Никита
#include <iostream>
#include "Triangle.h"
#include "Function.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	Triangle a[1];
	string name;
	double x, y;


	cout << "Введите название файла" << endl;
	cin >> name;

	a[0] = loadTriangle(name);

	if (a[0].getName() == "Неизвеcтно")//если имя не изменилось значит файла не было
	{
		try//проверка значений
		{
			cout << "Введите x и y " << endl;
			cin >> x;
			cin >> y;

			//a[0] = Triangle(x, y);	//создание по конструктору

			a[0].set_xy(x, y);		//создание меняя поля класса сетерами 
			a[0].setName("Мой треугольник (" + name + ")");

			cout << "Сохранение.." << endl;
			saveTriangle(a[0],name);
		}
		catch (invalid_argument& e)
		{
			cout << e.what() << endl;
		}
	}

	cout << a[0].getName() << endl;
	cout << "Стороны равны " << a[0].getX() << ", " << a[0].getY() << ", " << a[0].getZ() << endl;
	cout << "Площадь равна " << a[0].Area() << endl;
	cout << "Периметр равен " << a[0].Perimetr() << endl << endl;
	
	

	return 0;
}


