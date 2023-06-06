//����� - ����������� ������
#include "Triangle.h"
#define _USE_MATH_DEFINES
#include <math.h>


//����������� �� ���������
Triangle::Triangle()
{
	name = "������c���";
	x = 0;
	y = 0;
	z = 0;
}

//����������� �� ����������
Triangle::Triangle(double x1, double y1)
{
	/*
	* x � y ������������� �������� �� ������� ���� ��� �� ����� ���������
	* � ���� ��� �������� �������� �� ��� z �������� �� ����� 
	*/

	//���������� ������ � ��������
	setX(x1);
	setY(y1);
	name = "�����������";

	//������� ������� ������� ������� �� 
	//���� �������� � ���� ����� ���� �� ������� ���������
	//���� ���� 90 ��������, ������� 90 ����� ���� ������� ����� ��������� �������� 
	z = sqrt(x * x + y * y);
}

//������ �������
double Triangle::Area() const
{
	return x * y / 2;
}

//������ ���������
double Triangle::Perimetr() const
{
	return  x + y + z;
}