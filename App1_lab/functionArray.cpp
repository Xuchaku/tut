#include "stdafx.h"
#include "iostream"
using namespace std;
const int MAXI = 2147483647;
void print_array(int **arr, const int line, const int column) {
	//����� �������
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

	//���� ���������� �������.������������ �� ��� ���, ���� ��������� ������� �� ������ ����� column*line + number - 1
	while (arr[line - 1][column - 1] != column*line + number - 1) {
		//���������� ������� ����������� �������� �� �������� 0, ����������� i, j ��������
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
		//���������� ���������� �������� �������� �� ��������� ���������� ��������, (������ -> �����_����)
		//� ������ ����, ��� ��������� ������ �������� �� ������� ���������(����� ������) �� ����� ����
		while (e_line <= line - 1 && fl2 == 1) {
			arr[e_line][count2] = num;
			num++;
			e_line++;
			count2--;


		}
		//���������� ���������� �������� �������� �� ��������� ���������� ��������, (������ -> �����_����)
		// ���� ������������ �� ��� ��� ���� j != 0
		while (e_column >= 0 && fl2 == 0) {
			if (count == line - 1)
				fl2 = 1;
			arr[count][e_column] = num;
			num++;
			e_column--;
			count++;
		}


		fl = 0;
		//����� �����

	}



}

void inital_array(int **arr, const int line, const int column, const int number) {

	//���������� ������� �����
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