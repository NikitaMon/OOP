#pragma once
#include <iostream>

class AbstractFigure
{
private:
	std::string name;
public:

	//����������� �� ���������
	AbstractFigure();

	//��������� ����������� ������� 
	//��� ������ � ���� ��������� ��������������� 

	//�������
	virtual const double area() = 0;
	virtual const double perimeter() = 0;

	//�������
	const std::string getName() { return name; };
	
	//�������
	void setName(std::string n) {
		name = n;
	}
};

