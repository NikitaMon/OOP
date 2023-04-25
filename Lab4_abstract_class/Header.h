#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

using namespace std;

class Figure
{
public:

	//конструктор по умолчания
	Figure() {

	}

	//конструктор с двумя значениями
	Figure(double x1, double y1) {

	}

	//конструктор с одним значением
	Figure(double x1)
	{

	}

	//полностью абстрактные функции 
	//для работы с ними требуется переопределение 
	
	//функции
	virtual double area() = 0;
	virtual double perimeter() = 0;

	//геттеры
	virtual double getX() const = 0;
	virtual double getY() const = 0;
	virtual double getZ() const = 0;
	virtual string getName() const = 0;

	//сеттеры
	virtual void setX(double x1) = 0;
	virtual void setY(double y1) = 0;
	virtual void setZ(double z1) = 0;
	virtual void setName(string name1) = 0;
};


/*
*	класс треугольника
*/
class Triangle :public Figure
{
private:
	double x;
	double y;
	double z;
	string name;

public:
	Triangle() :Figure()
	{
		x = 0;
		y = 0;
		z = 0;
		setName("Неизветно");
	}

	Triangle(double x1, double y1) :Figure(x1, y1)
	{
		setX(x1);
		setY(y1);
		setName("Треугольник");
		setZ((sqrt(x1 * x1 + y1 * y1 - 2 * x1 * y1 * cos(90 * M_PI / 180))));
	}

	Triangle(double x1) :Figure(x1)
	{
		setX(x1);
		setY(x1);
		setName("Треугольник две стороны равны");
		setZ((sqrt(x1 * x1 + getY() * getY() - 2 * x1 * getY() * cos(90 * M_PI / 180))));
	}

	//виртуальные функции
	double area()override {
		return getX() * getY() / 2;
	}

	double perimeter()override {
		return getX() + getY() + getZ();
	}

	//гетеры
	double getX() const override { return x; };
	double getY() const override { return y; };
	double getZ() const override { return z; };
	string getName() const override { return name; };

	//сетеры
	void setX(double x1)override {
		if (x1 <= 0)
			throw invalid_argument{ "Сторона X не может быть равна или меньше 0" };//обработка исключения
		else
			x = x1;
	}

	void setY(double y1)override {
		if (y1 <= 0)
			throw invalid_argument{ "Сторона Y не может быть равна или меньше 0" };
		else
			y = y1;
	}

	void setZ(double z1)override {
		if (z1 <= 0)
			throw invalid_argument{ "Сторона Z не может быть равна или меньше 0" };
		else
			z = z1;
	}

	void setName(string name1)override {
		name = name1;
	}

};