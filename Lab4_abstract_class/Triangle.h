#pragma once
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>


#include "Figure.h"
/*
*	����� ������������
*/
class Triangle :public Figure
{
private:
	double x;
	double y;
	double z;
	std::string name;

public:
	Triangle() :Figure()
	{
		x = 0;
		y = 0;
		z = 0;
		setName("����������");
	}

	Triangle(double x1, double y1) :Figure(x1, y1)
	{
		setX(x1);
		setY(y1);
		setName("�����������");
		setZ((sqrt(x1 * x1 + y1 * y1 - 2 * x1 * y1 * cos(90 * M_PI / 180))));
	}

	Triangle(double x1) :Figure(x1)
	{
		setX(x1);
		setY(x1);
		setName("����������� ��� ������� �����");
		setZ((sqrt(x1 * x1 + getY() * getY() - 2 * x1 * getY() * cos(90 * M_PI / 180))));
	}

	//����������� �������
	double area()override {
		return getX() * getY() / 2;
	}

	double perimeter()override {
		return getX() + getY() + getZ();
	}

	//�������
	double getX() const override { return x; };
	double getY() const override { return y; };
	double getZ() const override { return z; };
	std::string getName() const override { return name; };

	//�������
	void setX(double x1)override {
		if (x1 <= 0)
			throw std::invalid_argument{ "������� X �� ����� ���� ����� ��� ������ 0" };//��������� ����������
		else
			x = x1;
	}

	void setY(double y1)override {
		if (y1 <= 0)
			throw std::invalid_argument{ "������� Y �� ����� ���� ����� ��� ������ 0" };
		else
			y = y1;
	}

	void setZ(double z1)override {
		if (z1 <= 0)
			throw std::invalid_argument{ "������� Z �� ����� ���� ����� ��� ������ 0" };
		else
			z = z1;
	}

	void setName(std::string name1)override {
		name = name1;
	}

};

