//����� - ����������� ������
#include <iostream>
#include <fstream>
#include <string>

#include "Function.h"

using namespace std;

/*
* ������ � ����
*/
void saveTriangle(Triangle a)
{
    string x = to_string(a.getX());
    string y = to_string(a.getY());
    x.erase(remove(x.begin(), x.end(), ','), x.end());
    y.erase(remove(y.begin(), y.end(), ','), y.end());
    string name = "text" + x + y + ".txt";//�������� �����

    ofstream f;		//��������� ���� � ������ ������
    f.open(name, ios::out);
    if (!f.is_open()) { cout << "������\n"; return; }

    f << a.getX() << " " << a.getY();

    f.close();//�������� ������
}

/*
* ������ �� �����
*/
Triangle loadTriangle(double a, double b)
{
    string x = to_string(a);//������� �������� � ������
    string y = to_string(b);

    x.erase(remove(x.begin(), x.end(), ','), x.end());//���� ����� � �� ����� �� ���� ',' ����� �����
    y.erase(remove(y.begin(), y.end(), ','), y.end());

    string name = "text" + x + y + ".txt";//�������� �����
    
    ifstream f; 

    f.open(name);//�������� ����� �� �������������
    if (!f.is_open()) { f.close(); return Triangle(); }
    f.close();

    f.open(name, ios::app);//��������� ���� � ������ ������

    int sc1,sc2;   //���������� � ������� ������������ ���������� �����
    f >> sc1;
    f >> sc2;
    
    f.close();//�������� ������
    
    Triangle tr;
    try
    {
        tr = Triangle(sc1, sc2);
    }
    catch(invalid_argument& e)
    {
        cout << e.what() << endl;
    }
    return tr;
}