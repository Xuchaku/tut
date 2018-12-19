#include "stdafx.h"
#include "CppUnitTest.h"
#include "../App1_lab/functionArray.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(ArrayEqual_NxN)
		{
			int arrTest[3][3] = { { 1,2,4 },{ 3,5,7 },{ 6,8,9 } };
			int line = 3, str = 3, num = 1;
			int **arr = new int*[line];
			for (int k = 0; k < line; k++) {          // двумерный
				arr[k] = new int[str]; // массив 
			}
			inital_array(arr, line, str, num);//инициализация массива
			fill_array(arr, line, str, num);//заполнение массива диагнолями
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < str; j++) {
					Assert::AreEqual(arrTest[i][j], arr[i][j]);
				}
			}
			free_arr(arr, line);
		}

		TEST_METHOD(ArrayEqual_NlinelowMcolumngrow)
		{
			int arrTest[2][7] = { { 3,4,6,8,10,12,14 },{ 5,7,9,11,13,15,16 } };
			int line = 2, str = 7, num = 3;
			int **arr = new int*[line];
			for (int k = 0; k < line; k++) {          // двумерный
				arr[k] = new int[str]; // массив 
			}
			inital_array(arr, line, str, num);//инициализация массива
			fill_array(arr, line, str, num);//заполнение массива диагнолями
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < str; j++) {
					Assert::AreEqual(arrTest[i][j], arr[i][j]);
				}
			}
			free_arr(arr, line);
		}

		TEST_METHOD(ArrayEqual_NlinegrowMcolumnlow)
		{
			int arrTest[6][3] = { { 9,10,12 },{ 11,13,15 },{ 14,16,18 },{ 17,19,21 },{ 20,22,24 },{ 23,25,26 } };
			int line = 6, str = 3, num = 9;
			int **arr = new int*[line];
			for (int k = 0; k < line; k++) {          // двумерный
				arr[k] = new int[str]; // массив 
			}
			inital_array(arr, line, str, num);//инициализация массива
			fill_array(arr, line, str, num);//заполнение массива диагнолями
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < str; j++) {
					Assert::AreEqual(arrTest[i][j], arr[i][j]);
				}
			}
			free_arr(arr, line);
		}
		TEST_METHOD(ArrayEqual_linegrowColumnOne)
		{
			int arrTest[5][1] = { { 5 },{ 6 },{ 7 },{ 8 },{ 9 } };
			int line = 5, str = 1, num = 5;
			int **arr = new int*[line];
			for (int k = 0; k < line; k++) {          // двумерный
				arr[k] = new int[str]; // массив 
			}
			inital_array(arr, line, str, num);//инициализация массива
			fill_array(arr, line, str, num);//заполнение массива диагнолями
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < str; j++) {
					Assert::AreEqual(arrTest[i][j], arr[i][j]);
				}
			}
			free_arr(arr, line);
		}
		TEST_METHOD(ArrayEqual_lineOneColumngrow)
		{
			int arrTest[1][5] = { { 5,6,7,8,9 } };
			int line = 1, str = 5, num = 5;
			int **arr = new int*[line];
			for (int k = 0; k < line; k++) {          // двумерный
				arr[k] = new int[str]; // массив 
			}
			inital_array(arr, line, str, num);//инициализация массива
			fill_array(arr, line, str, num);//заполнение массива диагнолями
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < str; j++) {
					Assert::AreEqual(arrTest[i][j], arr[i][j]);
				}
			}
			free_arr(arr, line);
		}

		TEST_METHOD(ArrayEqual_OneXOne)
		{
			int arrTest[1][1] = { { 1 } };
			int line = 1, str = 1, num = 1;
			int **arr = new int*[line];
			for (int k = 0; k < line; k++) {          // двумерный
				arr[k] = new int[str]; // массив 
			}
			inital_array(arr, line, str, num);//инициализация массива
			fill_array(arr, line, str, num);//заполнение массива диагнолями
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < str; j++) {
					Assert::AreEqual(arrTest[i][j], arr[i][j]);
				}
			}
			free_arr(arr, line);
		}

		TEST_METHOD(ArrayEqual_negativeNumber)
		{
			int arrTest[9][2] = { { -4,-3 },{ -2,-1 },{ 0,1 },{ 2,3 },{ 4,5 },{ 6,7 },{ 8,9 },{ 10,11 },{ 12,13 } };
			int line = 9, str = 2, num = -4;
			int **arr = new int*[line];
			for (int k = 0; k < line; k++) {          // двумерный
				arr[k] = new int[str]; // массив 
			}
			inital_array(arr, line, str, num);//инициализация массива
			fill_array(arr, line, str, num);//заполнение массива диагнолями
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < str; j++) {
					Assert::AreEqual(arrTest[i][j], arr[i][j]);
				}
			}
			free_arr(arr, line);
		}

	};
}