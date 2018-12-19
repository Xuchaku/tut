#include "stdafx.h"
#include "iostream"
using namespace std;
const int MAXI = 2147483647;
void print_array(int **arr, const int line, const int column) {
	//вывод массива
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {
			cout.width(4);
			std::cout << arr[i][j] << " ";
		}
		std::cout << endl;
	}
}
void fill_array(int **arr, const int line, const int column, const int number) {
	int fl = 0, fl2 = 0;
	int num = number, e_line, e_column, count, count2;

	//цикл заполнени€ массива.ѕродолжаетс€ до тех пор, пока последний элемент не станет равен column*line + number - 1
	while (arr[line - 1][column - 1] != column*line + number - 1) {
		//нахождение первого попавшегос€ элемента со значение 0, запоминание i, j элемента
		for (int i = 0; i < line; i++) {
			for (int j = 0; j < column; j++) {
				if (arr[i][j] == MAXI)
				{
					e_line = i;
					e_column = j;
					fl = 1;
					break;
				}
			}
			if (fl)break;

		}
		count = e_line;
		count2 = e_column;
		//заполнение очередного элемента сто€щего на диагонали найденного элемента, (справа -> влево_вниз)
		//с учетом того, что последний индекс элемента на текущей диагонали(левый нижний) не равен нулю
		while (e_line <= line - 1 && fl2 == 1) {
			arr[e_line][count2] = num;
			num++;
			e_line++;
			count2--;


		}
		//заполнение очередного элемента сто€щего на диагонали найденного элемента, (справа -> влево_вниз)
		// цикл продолжаетс€ до тех пор пока j != 0
		while (e_column >= 0 && fl2 == 0) {
			if (count == line - 1)
				fl2 = 1;
			arr[count][e_column] = num;
			num++;
			e_column--;
			count++;
		}


		fl = 0;
		//сброс флага

	}



}

void inital_array(int **arr, const int line, const int column, const int number) {

	//заполнение массива нулми
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {
			arr[i][j] = MAXI;
		}

	}


}
void free_arr(int **arr, const int line) {
	for (int i = 0; i < line; i++) {
		delete arr[i];
	}
	delete[] arr;
}