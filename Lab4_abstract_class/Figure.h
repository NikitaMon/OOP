#pragma once

class Figure
{
public:
	
	//конструктор по умолчанию
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
	virtual std::string getName() const = 0;

	//сеттеры
	virtual void setX(double x1) = 0;
	virtual void setY(double y1) = 0;
	virtual void setZ(double z1) = 0;
	virtual void setName(std::string name1) = 0;
};


