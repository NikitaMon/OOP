//јвтор - ћонастыршин Ќикита
#pragma once
#include <iostream>
using namespace std;
/*
*  ласс Triangle
* предназначен дл€ получени€ третьей стороны треугольника, площади и периметра
* по двум сторонам и углу между ними 90 градусов
* 
* раньше класс называлс€ Figure по причине того что было 3 функции,
* дл€ треугольника, пр€моугольника и круга
* по поправкам преподавател€ ныне удалены и класс переименован
*/
class Triangle
{
private:
	double x;	//перва€ сторона
	double y;	//втора€ сторона
	double z;	//треть€ сторона
	string name;	//название фигуры

public:

	//конструкторы
	Triangle();
	Triangle(double x1, double y1);

	//функци€ площади
	double Area();

	//функци€ периметра
	double Perimetr();

	//гетеры
	//если значение возвращаемое гетером слишком большое, 
	//дл€ оптимизации программы возвращают не значение переменной а адрес
	//и чтобы случайно не изменить значение приватной переменной с помощью гетера добавл€ют const
	//что запретит подобные махинации
	const double &getX() { return x; }
	const double &getY() { return y; }
	const double &getZ() { return z; }
	const string &getName() { return name; }
	
	/*
	//пример плохого гетера
	//(продолжение в Lab2_simple_class.cpp) 
	double &getXadr() { return x; }
	*/

	//protected чтобы не вызывались в main
protected:
	//сетеры
	void setX(double x1) {
		if (x1 <= 0)
			throw invalid_argument{ "—торона X не может быть равна или меньше 0" };//обработка исключени€
		else
			x = x1;
	}

	void setY(double y1) {
		if (y1 <= 0)
			throw invalid_argument{ "—торона Y не может быть равна или меньше 0" };
		else
			y = y1;
	}
};
