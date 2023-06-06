#pragma once
#include "AbstractFigure.h"

class Triangle :public AbstractFigure
{
private:
	double x;
	double y;
	double z;

public:
	Triangle() :AbstractFigure()
	{
		x = 0;
		y = 0;
		z = 0;
		setName("����������");
	}

	Triangle(double x1, double y1) :AbstractFigure()
	{
		setX(x1);
		setY(y1);
		setName("�����������");
		// ����� ������� z �� ������� sqrt(x * x + y * y - 2 * x * y * cos(90 * M_PI / 180))
		//��� ��� ������� 90 ����� ���� �� ����� ���������� 
		setZ((sqrt(x * x + y * y)));
	}

	Triangle(double x1) :AbstractFigure()
	{
		setX(x1);
		setY(x1);
		setName("����������� ��� ������� �����");
		setZ((sqrt(x * x + y * y)));
	}

	//����������� �������
	const double area()override {
		return x * y / 2;
	}

	const double perimeter()override {
		return x + y + z;
	}

	//�������
	double const getX() { return x; };
	double const getY() { return y; };
	double const getZ() { return z; };

	//�������
	void setX(double x1) {
		if (x1 <= 0)
			throw std::invalid_argument{ "������� X �� ����� ���� ����� ��� ������ 0" };//��������� ����������
		else
			x = x1;
	}

	void setY(double y1) {
		if (y1 <= 0)
			throw std::invalid_argument{ "������� Y �� ����� ���� ����� ��� ������ 0" };
		else
			y = y1;
	}

	void setZ(double z1) {
		if (z1 <= 0)
			throw std::invalid_argument{ "������� Z �� ����� ���� ����� ��� ������ 0" };
		else
			z = z1;
	}

};

