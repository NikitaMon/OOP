#pragma once
//����� - ����������� ������
//� ������� ������� �� h � cpp �� �� ��������
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Vector_f.h"

using namespace std;
// �������� �������� ��� ���� vector<int>
using vector_int = vector<int>;
// vector -- �����-������ ��� ������������� �������
// vector -- ��������� �����, ������� ������������ ������� ����
// ��� ��������� � ���� �������� (����� ��� �������� �������). 
// ��� ��������� �������� ����������� ������ ������� ������ 
// < > ��� ���������� ��������� ���� vector

/*
//�������� ����� ��� ����� �� ���� ��������� �������
string namefile(vector_int& v)
{
    string str = "";
    for (int i = 0; i < v.size(); i++)
    {
        if (i == 255) return str;//������������ ������ �������� �����
        str = str + to_string(v[i]);
    }
    return str;
}*/

/// ����� ������������� �������
void print_vector(const vector_int& v) {
    // ������ ��������� �� ������ ����� �������� ������� �����������
    // �.�. ��� ������� �� ������ ������ ������, �� ������ ���������� �������� ����������
    // ����������� �������� �� ����������� ������ ���� ����������
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}

/*
* ��������� ������ ���������� �������
*/
void rand_vector(vector_int& v) {
    for (int i = 0; i < v.size(); ++i) {
        v[i] = rand() % 10;
    }
}

/*
* ������� ����� ���� ���������� � �������
*/
int vec_sum(vector_int& v) {
    int r = 0;//���������

    for (int i = 0; i != v.size(); i++) {
        r = r + v[i];
    }
    return r;
}

/*
* ������ � ����
* -1 ������ ���� �� ������
*  0 �� ������
*/
int savevec(vector_int& v, string name)
{
    //copy(v.begin(), v.end(), std::ostream_iterator<int>(cout, " "))
    //string name = namefile(v) + ".txt";//�������� �����

    ofstream f;		//��������� ���� � ������ ������
    f.open(name, ios::out);
    if (!f.is_open()) { return -1; }

    for (int i = 0; i < v.size(); ++i)//���� ������
        f << " " << v[i];
    f.close();//�������� ������
    return 0;
}

/*
* ������ �� �����
* -1 ������ ���� �� ������
*  0 �� ������
*/
int loadvec(vector_int& v, string name)
{
    //name = name + ".txt";
    ifstream f; //��������� ���� � ������ ������
    int scan;   //���������� � ������� ������������ ���������� �����
    v.clear();//���� ����� ���� �������

    f.open(name, ios::app);
    if (!f.is_open()) { return -1; }

    while (!f.eof())//���� �� ���������� ���� ������ ��� �� ����� ����� ������� ��� ���� ����� �����
    {
        f >> scan;

        v.push_back(scan);  //������� resize ���������� �������� � ��� � ����� �����
                            //������� resize �� ����������� ��������?
    }
    f.close();//�������� ������
    return 0;
}


