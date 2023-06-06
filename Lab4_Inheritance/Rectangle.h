#pragma once
#include "AbstractFigure.h"

class Rectangle :public AbstractFigure
{
private:
	double x;
	double y;

public:
	Rectangle() :AbstractFigure()
	{
		x = 0;
		y = 0;
		setName("Неизвестно");
	}
	Rectangle(double x1, double y1) :AbstractFigure()
	{
		setX(x1);
		setY(y1);
		setName("Прямоугольник");
	}

	Rectangle(double x1) :AbstractFigure()
	{
		setX(x1);
		setY(x1);
		setName("Куб");
	}

	//виртуальные функции
	const double area()override {
		return x * y;
	}

	const double perimeter()override {
		return (x + y) * 2;
	}

	//геттеры
	double const getX() { return x; };
	double const getY() { return y; };

	//сеттеры
	void setX(double x1) {
		if (x1 <= 0)
			throw std::invalid_argument{ "Сторона X не может быть равна или меньше 0" };//обработка исключения
		else
			x = x1;
	}

	void setY(double y1) {
		if (y1 <= 0)
			throw std::invalid_argument{ "Сторона Y не может быть равна или меньше 0" };
		else
			y = y1;
	}
};

