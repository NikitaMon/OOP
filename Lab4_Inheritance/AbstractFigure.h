#pragma once
#include <iostream>

class AbstractFigure
{
private:
	std::string name;
public:

	//конструктор по умолчанию
	AbstractFigure();

	//полностью абстрактные функции 
	//для работы с ними требуется переопределение 

	//функции
	virtual const double area() = 0;
	virtual const double perimeter() = 0;

	//геттеры
	const std::string getName() { return name; };
	
	//сеттеры
	void setName(std::string n) {
		name = n;
	}
};

