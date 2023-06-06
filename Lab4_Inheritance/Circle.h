#pragma once
#include "AbstractFigure.h"
#define _USE_MATH_DEFINES
#include <math.h>

class Circle :public AbstractFigure
{
private:
	double r;

public:
	Circle() :AbstractFigure()
	{
		r = 0;
		setName("����������");
	}

	Circle(double r1) :AbstractFigure()
	{
		setR(r1);
		setName("����");

	}
	//����������� �������
	const double area()override {
		return  r * r * M_PI; //S = pi * R^2
	}

	const double perimeter()override {
		return 2 * M_PI * r; //C = 2pi * R
	}

	//�������
	double const getR() { return r; };


	//�������
	void setR(double r1) {
		if (r1 <= 0)
			throw std::invalid_argument{ "������ �� ����� ���� ����� ��� ������ 0" };//��������� ����������
		else
			r = r1;
	}
};

