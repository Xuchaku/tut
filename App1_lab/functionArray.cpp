#include "stdafx.h"
#include "iostream"
using namespace std;
const int MAXI = 2147483647;
void print_array(int **matrix, const size_t line, const size_t column) {
	//����� �������
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {
			cout.width(4);
			std::cout << matrix[i][j] << " ";
		}
		std::cout << endl;
	}
}
void fill_array(int **matrix, const size_t line, const size_t column, const int Startnumber) {
	int mark_loop_one = 0, mark_loop_two = 0;
	int num = Startnumber, next_line, next_column, count_loop_one, count_loop_two;

	//���� ���������� �������.������������ �� ��� ���, ���� ��������� ������� �� ������ ����� column*line + number - 1
	while (matrix[line - 1][column - 1] != column*line + Startnumber - 1) {
		//���������� ������� ����������� �������� �� �������� 0, ����������� i, j ��������
		for (int i = 0; i < line; i++) {
			for (int j = 0; j < column; j++) {
				if (matrix[i][j] == MAXI)
				{
					next_line = i;
					next_column = j;
					mark_loop_one = 1;
					break;
				}
			}
			if (mark_loop_one)break;

		}
		count_loop_one = next_line;
		count_loop_two = next_column;
		//���������� ���������� �������� �������� �� ��������� ���������� ��������, (������ -> �����_����)
		//� ������ ����, ��� ��������� ������ �������� �� ������� ���������(����� ������) �� ����� ����
		while (next_line <= line - 1 && mark_loop_two == 1) {
			matrix[next_line][count_loop_two] = num;
			num++;
			next_line++;
			count_loop_two--;


		}
		//���������� ���������� �������� �������� �� ��������� ���������� ��������, (������ -> �����_����)
		// ���� ������������ �� ��� ��� ���� j != 0
		while (next_column >= 0 && mark_loop_two == 0) {
			if (count_loop_one == line - 1)
				mark_loop_two = 1;
			matrix[count_loop_one][next_column] = num;
			num++;
			next_column--;
			count_loop_one++;
		}


		mark_loop_one = 0;
		//����� �����

	}



}

void inital_array(int **matrix, const size_t line, const size_t column, const int Startnumber) {

	//���������� ������� �����
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {
			matrix[i][j] = MAXI;
		}

	}


}
void free_arr(int **matrix, const size_t line) {
	for (int i = 0; i < line; i++) {
		delete matrix[i];
	}
	delete[] matrix;
}