//����� - ����������� ������
#pragma once
#include <iostream>
using namespace std;
/*
* ����� Triangle
* ������������ ��� ��������� ������� ������� ������������, ������� � ���������
* �� ���� �������� � ���� ����� ���� 90 ��������
* 
* ������ ����� ��������� Figure �� ������� ���� ��� ���� 3 �������,
* ��� ������������, �������������� � �����
* �� ��������� ������������� ���� ������� � ����� ������������
*/
class Triangle
{
private:
	double x;	//������ �������
	double y;	//������ �������
	double z;	//������ �������
	string name;	//�������� ������

public:

	//������������
	Triangle();
	Triangle(double x1, double y1);
	
	void set_xy(double x, double y)
	{
		setX(x);
		setY(y);
		z = sqrt(x * x + y * y);
	}

	void setName(string n)
	{
		name = n;
	}

	//������� �������
	double Area() const;

	//������� ���������
	double Perimetr() const;

	//������
	//���� �������� ������������ ������� ������� �������, 
	//��� ����������� ��������� ���������� �� �������� ���������� � �����
	//� ����� �������� �� �������� �������� ��������� ���������� � ������� ������ ��������� const
	//��� �������� �������� ���������
	double getX() const { return x; }
	double getY() const { return y; }
	double getZ() const { return z; }
	string getName() const { return name; }
	

	//protected ����� �� ���������� � main
protected:
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
