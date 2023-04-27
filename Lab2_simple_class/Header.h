#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>


using namespace std;

/*
* Класс Figure
* предназначен для получения третьей стороны треугольника, площади и периметра
* по двум сторонам и углу между ними 90 градусов
*/

class Figure
{
private:
	double x;	//первая сторона
	double y;	//вторая сторона
	double z;	//третья сторона
	double area;		//площадь
	double perimeter;	//периметр
	string name;	//название фигуры

public:

	//конструктор по умолчанию
	Figure();

	//функции фигуры
	void triangle(double x1, double y1);

	//гетеры
	///const нужен для того чтобы переменную к которой будет присваиватся адрес или значение полученные гетером 
	///нельзя было случайно изменить 
	double getX() const { return x; }
	double getY() const { return y; }
	double getZ() const { return z; }
	string getName() const { return name; }
	double getArea() const { return area; }
	double getPerimetr() const { return perimeter; }

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

//конструктор по умолчанию
Figure::Figure()
{
	name = "Неизветно";
	x = 0;
	y = 0;
	z = 0;
	area = 0;
	perimeter = 0;
}

/*
* функция фигуры
* по двум сторонам и углу cos(90 * M_PI / 180), расчитывает третью сторону
* расчитывает площадь и периметр
*/
void Figure::triangle(double x1, double y1)
{
	//присвоение сторон и названия
	setX(x1);
	setY(y1);
	name = "Треугольник";

	z = sqrt(x * x + y * y - 2 * x * y * cos(90 * M_PI / 180));//формула расчёта третьей стороны по 
															   //двум сторонам и углу между ними по теореме косинусов
															   //угол взят 90 градусов,  (M_PI / 180) - преобразование угла в нужную форму 
															   
	area = x * y / 2;//расчёт площади

	perimeter = x + y + z;//расчёт периметра
}