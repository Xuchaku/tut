#include "stdafx.h"
#include "iostream"
#include "functionArray.h"

using namespace std;
int main()
{
	//���������� ������� �����������
	int line, str, num;
	//���-�� �����, �������, ��������� ��������
	do {
		std::cout << "Count line" << std::endl;
		std::cin >> line;
		std::cout << "Count column" << std::endl;
		std::cin >> str;
	} while (line < 0 || str < 0);
	//���� ����������� ������� � ��������� �������
	std::cout << "Start number" << std::endl;
	std::cin >> num;

	int **arr = new int*[line];
	for (int k = 0; k < line; k++) {          // ���������
		arr[k] = new int[str]; // ������ 
	}

	inital_array(arr, line, str, num);//������������� �������
	fill_array(arr, line, str, num);//���������� ������� ����������
	print_array(arr, line, str);//����� ������� �� �����
	free_arr(arr, line);
	system("pause");

	return 0;
}