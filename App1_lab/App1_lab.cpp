#include "stdafx.h"
#include "iostream"
#include "functionArray.h"

using namespace std;
int main()
{
	//���������� ������� �����������
	size_t line, column;
	int Startnumber;
	//���-�� �����, �������, ��������� ��������
	do {
		std::cout << "Count line" << std::endl;
		std::cin >> line;
		std::cout << "Count column" << std::endl;
		std::cin >> column;
	} while (line < 0 || column < 0);
	//���� ����������� ������� � ��������� �������
	std::cout << "Start number" << std::endl;
	std::cin >> Startnumber;

	int **matrix = new int*[line];
	for (int k = 0; k < line; k++) {          // ���������
		matrix[k] = new int[column]; // ������ 
	}

	inital_array(matrix, line, column, Startnumber);//������������� �������
	fill_array(matrix, line, column, Startnumber);//���������� ������� ����������
	print_array(matrix, line, column);//����� ������� �� �����
	free_arr(matrix, line);
	system("pause");

	return 0;
}