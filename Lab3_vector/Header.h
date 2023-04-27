#pragma once
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

// �������� �������� ��� ���� vector<int>
using vector_int = vector<int>;
// vector -- �����-������ ��� ������������� �������
// vector -- ��������� �����, ������� ������������ ������� ����
// ��� ��������� � ���� �������� (����� ��� �������� �������). 
// ��� ��������� �������� ����������� ������ ������� ������ 
// < > ��� ���������� ��������� ���� vector


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
*/
void savevec(vector_int& v)
{
    string name = "text.txt";//�������� �����

    ofstream f;		//��������� ���� � ������ ������
    f.open(name, ios::out);
    if (!f.is_open()) { cout << "������"; return; }

    for (int i = 0; i < v.size(); ++i)//���� ������
        f << " " << v[i];
    f.close();//�������� ������
}

/*
* ������ �� �����
*/
void loadvec(vector_int& v)
{
    string name = "text.txt";//�������� �����
    ifstream f; //��������� ���� � ������ ������
    int scan;   //���������� � ������� ������������ ���������� �����
    v.clear();//���� ����� ���� �������

    f.open(name, ios::app);
    if (!f.is_open()) { cout << "������"; return; }

    while (!f.eof())//���� �� ���������� ���� ������ ��� �� ����� ����� ������� ��� ���� ����� �����
    {
        f >> scan;
        v.push_back(scan);
    }
    f.close();//�������� ������
}