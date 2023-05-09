#pragma once
//Автор - Монастыршин Никита
//я пытался разбить на h и cpp но всё ломалось
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Vector_f.h"

using namespace std;
// создание синонима для типа vector<int>
using vector_int = vector<int>;
// vector -- класс-обёртка для динамического массива
// vector -- шаблонный класс, поэтому поддерживает задание типа
// для вложенных в него значений (здесь это элементы массива). 
// Тип вложенных значений указывается внутри угловых скобок 
// < > при объявлении переменой типа vector

//создание имени для файла по всем элементам вектора
string namefile(vector_int& v)
{
    string str = "";
    for (int i = 0; i < v.size(); i++)
    {
        if (i == 255) return str;//максимальная длинна названия файла
        str = str + to_string(v[i]);
    }
    return str;
}

/// вывод динамического массива
void print_vector(const vector_int& v) {
    // вектор передаётся по ссылке чтобы избежать лишнего копирования
    // т.к. эта функция не должна менять вектор, то делаем формальный параметр константой
    // фактический параметр не обязательно должен быть константой
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}

/*
* заполняет вектор случайными числами
*/
void rand_vector(vector_int& v) {
    for (int i = 0; i < v.size(); ++i) {
        v[i] = rand() % 10;
    }
}

/*
* подсчёт суммы всех переменных в векторе
*/
int vec_sum(vector_int& v) {
    int r = 0;//результат

    for (int i = 0; i != v.size(); i++) {
        r = r + v[i];
    }
    return r;
}

/*
* запись в файл
* -1 ошибка файл не открыт
*  0 всё хорошо
*/
int savevec(vector_int& v)
{
    string name = namefile(v) + ".txt";//название файла

    ofstream f;		//открываем файл в режиме записи
    f.open(name, ios::out);
    if (!f.is_open()) { return -1; }

    for (int i = 0; i < v.size(); ++i)//цикл записи
        f << " " << v[i];
    f.close();//закрытие потока
    return 0;
}

/*
* чтение из файла
* -1 ошибка файл не открыт
*  0 всё хорошо
*/
int loadvec(vector_int& v, string name)
{
    name = name + ".txt";
    ifstream f; //открываем файл в режиме чтения
    int scan;   //переменная в которую записывается содержимое файла
    v.clear();//если чтото было очистит

    f.open(name, ios::app);
    if (!f.is_open()) { return -1; }

    while (!f.eof())//пока не закончится файл читать или не найдёт число которое уже есть такое число
    {
        f >> scan;

        v.push_back(scan);  //сделать resize изначально побольше и уже в конце цикла
                            //сделать resize по колличеству итераций?
    }
    f.close();//закрытие потока
    return 0;
}


