//Автор - Монастыршин Никита
#include "Vector_f.h"

using namespace std;

int main() {
    srand(time(NULL));//убрать псевдослучайные числа rand
    setlocale(LC_ALL, "russian");

    vector_int arr;  // динамический массив
    vector_int vec;
    int c;//размер массива
    unsigned n = arr.size();    // -> размер

	while (1) {
		cout << "Введите размер массива" << endl;
		cin >> c;
		if (c > 0)
		    break;
    }
    cout << "Вектор arr" << endl;
    arr.resize(c);
    rand_vector(arr);
    print_vector(arr);
    cout << "Сумма всех элементов - " << vec_sum(arr) << endl;
    savevec(arr);//сохранение arr

    cout << "Вектор vec" << endl;
    loadvec(vec, namefile(arr));//и загрузка из файла в vec
    print_vector(vec);


    arr.clear();                // освобождение памяти 
    // функция clear вызывается автоматически при уничтожении переменной

    return 0;
}