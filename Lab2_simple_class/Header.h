#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>


using namespace std;

/*
* ����� Figure
* ������������ ��� ��������� ������� ������� ������������, ������� � ���������
* �� ���� �������� � ���� ����� ���� 90 ��������
*/

class Figure
{
private:
	double x;	//������ �������
	double y;	//������ �������
	double z;	//������ �������
	double area;		//�������
	double perimeter;	//��������
	string name;	//�������� ������

public:

	//����������� �� ���������
	Figure();

	//������� ������
	void triangle(double x1, double y1);

	//������
	///const ����� ��� ���� ����� ���������� � ������� ����� ������������ ����� ��� �������� ���������� ������� 
	///������ ���� �������� �������� 
	double getX() const { return x; }
	double getY() const { return y; }
	double getZ() const { return z; }
	string getName() const { return name; }
	double getArea() const { return area; }
	double getPerimetr() const { return perimeter; }

	//������
	void setX(double x1) {
		if (x1 <= 0)
			throw invalid_argument{ "������� X �� ����� ���� ����� ��� ������ 0" };//��������� ����������
		else
			x = x1;
	}

	void setY(double y1) {
		if (y1 <= 0)
			throw invalid_argument{ "������� Y �� ����� ���� ����� ��� ������ 0" };
		else
			y = y1;
	}

};

//����������� �� ���������
Figure::Figure()
{
	name = "���������";
	x = 0;
	y = 0;
	z = 0;
	area = 0;
	perimeter = 0;
}

/*
* ������� ������
* �� ���� �������� � ���� cos(90 * M_PI / 180), ����������� ������ �������
* ����������� ������� � ��������
*/
void Figure::triangle(double x1, double y1)
{
	//���������� ������ � ��������
	setX(x1);
	setY(y1);
	name = "�����������";

	z = sqrt(x * x + y * y - 2 * x * y * cos(90 * M_PI / 180));//������� ������� ������� ������� �� 
															   //���� �������� � ���� ����� ���� �� ������� ���������
															   //���� ���� 90 ��������,  (M_PI / 180) - �������������� ���� � ������ ����� 
															   
	area = x * y / 2;//������ �������

	perimeter = x + y + z;//������ ���������
}