#include "stdafx.h"
#include "iostream"
#include "functionArray.h"

using namespace std;
int main()
{
	//заполнение массива диагоналями
	int line, str, num;
	//кол-во строк, колонок, начальное значение
	do {
		std::cout << "Count line" << std::endl;
		std::cin >> line;
		std::cout << "Count column" << std::endl;
		std::cin >> str;
	} while (line < 0 || str < 0);
	//ввод размерности массива и начальных условий
	std::cout << "Start number" << std::endl;
	std::cin >> num;

	int **arr = new int*[line];
	for (int k = 0; k < line; k++) {          // двумерный
		arr[k] = new int[str]; // массив 
	}

	inital_array(arr, line, str, num);//инициализация массива
	fill_array(arr, line, str, num);//заполнение массива диагнолями
	print_array(arr, line, str);//вывод массива на экран
	free_arr(arr, line);
	system("pause");

	return 0;
}