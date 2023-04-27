#pragma once
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

// создание синонима для типа vector<int>
using vector_int = vector<int>;
// vector -- класс-обёртка для динамического массива
// vector -- шаблонный класс, поэтому поддерживает задание типа
// для вложенных в него значений (здесь это элементы массива). 
// Тип вложенных значений указывается внутри угловых скобок 
// < > при объявлении переменой типа vector


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
*/
void savevec(vector_int& v)
{
    string name = "text.txt";//название файла

    ofstream f;		//открываем файл в режиме записи
    f.open(name, ios::out);
    if (!f.is_open()) { cout << "Ошибка"; return; }

    for (int i = 0; i < v.size(); ++i)//цикл записи
        f << " " << v[i];
    f.close();//закрытие потока
}

/*
* чтение из файла
*/
void loadvec(vector_int& v)
{
    string name = "text.txt";//название файла
    ifstream f; //открываем файл в режиме чтения
    int scan;   //переменная в которую записывается содержимое файла
    v.clear();//если чтото было очистит

    f.open(name, ios::app);
    if (!f.is_open()) { cout << "Ошибка"; return; }

    while (!f.eof())//пока не закончится файл читать или не найдёт число которое уже есть такое число
    {
        f >> scan;
        v.push_back(scan);
    }
    f.close();//закрытие потока
}