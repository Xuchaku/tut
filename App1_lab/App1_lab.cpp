#include "stdafx.h"
#include "iostream"
#include "functionArray.h"

using namespace std;
int main()
{
	//заполнение массива диагоналями
	size_t line, column;
	int Startnumber;
	//кол-во строк, колонок, начальное значение
	do {
		std::cout << "Count line" << std::endl;
		std::cin >> line;
		std::cout << "Count column" << std::endl;
		std::cin >> column;
	} while (line < 0 || column < 0);
	//ввод размерности массива и начальных условий
	std::cout << "Start number" << std::endl;
	std::cin >> Startnumber;

	int **matrix = new int*[line];
	for (int k = 0; k < line; k++) {          // двумерный
		matrix[k] = new int[column]; // массив 
	}

	inital_array(matrix, line, column, Startnumber);//инициализация массива
	fill_array(matrix, line, column, Startnumber);//заполнение массива диагнолями
	print_array(matrix, line, column);//вывод массива на экран
	free_arr(matrix, line);
	system("pause");

	return 0;
}