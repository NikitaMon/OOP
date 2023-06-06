//Автор - Монастыршин Никита
#pragma once
#include <iostream>
using namespace std;
/*
* Класс Triangle
* предназначен для получения третьей стороны треугольника, площади и периметра
* по двум сторонам и углу между ними 90 градусов
* 
* раньше класс назывался Figure по причине того что было 3 функции,
* для треугольника, прямоугольника и круга
* по поправкам преподавателя ныне удалены и класс переименован
*/
class Triangle
{
private:
	double x;	//первая сторона
	double y;	//вторая сторона
	double z;	//третья сторона
	string name;	//название фигуры

public:

	//конструкторы
	Triangle();
	Triangle(double x1, double y1);
	
	void set_xy(double x, double y)
	{
		setX(x);
		setY(y);
		z = sqrt(x * x + y * y);
	}

	void setName(string n)
	{
		name = n;
	}

	//функция площади
	double Area() const;

	//функция периметра
	double Perimetr() const;

	//гетеры
	//если значение возвращаемое гетером слишком большое, 
	//для оптимизации программы возвращают не значение переменной а адрес
	//и чтобы случайно не изменить значение приватной переменной с помощью гетера добавляют const
	//что запретит подобные махинации
	double getX() const { return x; }
	double getY() const { return y; }
	double getZ() const { return z; }
	string getName() const { return name; }
	

	//protected чтобы не вызывались в main
protected:
	//сетеры
	void setX(double x1) {
		if (x1 <= 0)
			throw invalid_argument{ "Сторона X не может быть равна или меньше 0" };//обработка исключения
		else
			x = x1;
	}

	void setY(double y1) {
		if (y1 <= 0)
			throw invalid_argument{ "Сторона Y не может быть равна или меньше 0" };
		else
			y = y1;
	}
};
