#include "Header.h"


int main() {
    srand(time(NULL));//убрать псевдослучайные числа rand
    setlocale(LC_ALL, "russian");

    vector_int arr;  // динамический массив
    vector_int vec;
    int c;//размер массива
    unsigned n = arr.size();    // -> размер

	while (1) {//ничего лучше этого я не придумал
		try
		{
			cout << "Введите размер массива" << endl;
			cin >> c;
			if (c <= 0)
				throw invalid_argument{ "Нужно значение больше нуля." };
			break;

		}
		catch (invalid_argument& e)
		{
			cout << e.what() << endl;
		}
	}

    arr.resize(c);
    rand_vector(arr);
    print_vector(arr);
    
    cout << vec_sum(arr);

    //savevec(arr);//сохранение arr

    //loadvec(vec);//и загрузка из файла в vec
    //print_vector(vec);


    arr.clear();                // освобождение памяти 
    // функция clear вызывается автоматически при уничтожении переменной

    return 0;
}