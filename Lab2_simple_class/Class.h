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

	//������� �������
	double Area();

	//������� ���������
	double Perimetr();

	//������
	//���� �������� ������������ ������� ������� �������, 
	//��� ����������� ��������� ���������� �� �������� ���������� � �����
	//� ����� �������� �� �������� �������� ��������� ���������� � ������� ������ ��������� const
	//��� �������� �������� ���������
	const double &getX() { return x; }
	const double &getY() { return y; }
	const double &getZ() { return z; }
	const string &getName() { return name; }
	
	/*
	//������ ������� ������
	//(����������� � Lab2_simple_class.cpp) 
	double &getXadr() { return x; }
	*/

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
