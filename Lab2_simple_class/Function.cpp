//Автор - Монастыршин Никита
#include <iostream>
#include <fstream>
#include <string>

#include "Function.h"

using namespace std;

/*
* запись в файл
* -1 файл не открыт
*  0 файл открыт
*/
int saveTriangle(Triangle a)
{
	string x = to_string(a.getX());
	string y = to_string(a.getY());
	x.erase(remove(x.begin(), x.end(), ','), x.end());
	y.erase(remove(y.begin(), y.end(), ','), y.end());
	string name = "text" + x + y + ".txt";//название файла

	ofstream f;		//открываем файл в режиме записи
	f.open(name, ios::out);
	if (!f.is_open()) { return -1; }

	f << a.getX() << " " << a.getY();

	f.close();//закрытие потока
	return 0;
}

/*
* чтение из файла
*/
Triangle loadTriangle(double a, double b)
{
	string x = to_string(a);//перевод значений в стринг
	string y = to_string(b);

	x.erase(remove(x.begin(), x.end(), ','), x.end());//если число с не целое то знак ',' будет удалён
	y.erase(remove(y.begin(), y.end(), ','), y.end());

	string name = "text" + x + y + ".txt";//название файла
	
	ifstream f; 

	f.open(name);//проверка файла на существование
	if (!f.is_open()) { f.close(); return Triangle(); }
	f.close();

	f.open(name, ios::app);//открываем файл в режиме чтения

	int sc1,sc2;   //переменные в которую записывается содержимое файла
	f >> sc1;
	f >> sc2;
	
	f.close();//закрытие потока
	
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