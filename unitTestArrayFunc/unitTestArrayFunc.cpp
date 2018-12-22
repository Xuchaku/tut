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
			size_t line = 3, column = 3;
			int Startnumber = 1;
			int **arr = new int*[line];
			for (int k = 0; k < line; k++) {          // двумерный
				arr[k] = new int[column]; // массив 
			}
			inital_array(arr, line, column, Startnumber);//инициализация массива
			fill_array(arr, line, column, Startnumber);//заполнение массива диагнолями
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < column; j++) {
					Assert::AreEqual(arrTest[i][j], arr[i][j]);
				}
			}
			free_arr(arr, line);
		}

		TEST_METHOD(ArrayEqual_NlinelowMcolumngrow)
		{
			int arrTest[2][7] = { { 3,4,6,8,10,12,14 },{ 5,7,9,11,13,15,16 } };
			size_t line = 2, column = 7;
			int Startnumber = 3;
			int **arr = new int*[line];
			for (int k = 0; k < line; k++) {          // двумерный
				arr[k] = new int[column]; // массив 
			}
			inital_array(arr, line, column, Startnumber);//инициализация массива
			fill_array(arr, line, column, Startnumber);//заполнение массива диагнолями
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < column; j++) {
					Assert::AreEqual(arrTest[i][j], arr[i][j]);
				}
			}
			free_arr(arr, line);
		}

		TEST_METHOD(ArrayEqual_NlinegrowMcolumnlow)
		{
			int arrTest[6][3] = { { 9,10,12 },{ 11,13,15 },{ 14,16,18 },{ 17,19,21 },{ 20,22,24 },{ 23,25,26 } };
			size_t line = 6, column = 3;
			int Startnumber = 9;
			int **arr = new int*[line];
			for (int k = 0; k < line; k++) {          // двумерный
				arr[k] = new int[column]; // массив 
			}
			inital_array(arr, line, column, Startnumber);//инициализация массива
			fill_array(arr, line, column, Startnumber);//заполнение массива диагнолями
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < column; j++) {
					Assert::AreEqual(arrTest[i][j], arr[i][j]);
				}
			}
			free_arr(arr, line);
		}
		TEST_METHOD(ArrayEqual_linegrowColumnOne)
		{
			int arrTest[5][1] = { { 5 },{ 6 },{ 7 },{ 8 },{ 9 } };
			size_t line = 5, column = 1;
			int Startnumber = 5;
			int **arr = new int*[line];
			for (int k = 0; k < line; k++) {          // двумерный
				arr[k] = new int[column]; // массив 
			}
			inital_array(arr, line, column, Startnumber);//инициализация массива
			fill_array(arr, line, column, Startnumber);//заполнение массива диагнолями
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < column; j++) {
					Assert::AreEqual(arrTest[i][j], arr[i][j]);
				}
			}
			free_arr(arr, line);
		}
		TEST_METHOD(ArrayEqual_lineOneColumngrow)
		{
			int arrTest[1][5] = { { 5,6,7,8,9 } };
			size_t line = 1, column = 5;
			int Startnumber = 5;
			int **arr = new int*[line];
			for (int k = 0; k < line; k++) {          // двумерный
				arr[k] = new int[column]; // массив 
			}
			inital_array(arr, line, column, Startnumber);//инициализация массива
			fill_array(arr, line, column, Startnumber);//заполнение массива диагнолями
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < column; j++) {
					Assert::AreEqual(arrTest[i][j], arr[i][j]);
				}
			}
			free_arr(arr, line);
		}

		TEST_METHOD(ArrayEqual_OneXOne)
		{
			int arrTest[1][1] = { { 1 } };
			size_t line = 1, column = 1;
			int Startnumber = 1;
			int **arr = new int*[line];
			for (int k = 0; k < line; k++) {          // двумерный
				arr[k] = new int[column]; // массив 
			}
			inital_array(arr, line, column, Startnumber);//инициализация массива
			fill_array(arr, line, column, Startnumber);//заполнение массива диагнолями
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < column; j++) {
					Assert::AreEqual(arrTest[i][j], arr[i][j]);
				}
			}
			free_arr(arr, line);
		}

		TEST_METHOD(ArrayEqual_negativeNumber)
		{
			int arrTest[9][2] = { { -4,-3 },{ -2,-1 },{ 0,1 },{ 2,3 },{ 4,5 },{ 6,7 },{ 8,9 },{ 10,11 },{ 12,13 } };
			size_t line = 9, column = 2;
			int Startnumber = -4;
			int **arr = new int*[line];
			for (int k = 0; k < line; k++) {          // двумерный
				arr[k] = new int[column]; // массив 
			}
			inital_array(arr, line, column, Startnumber);//инициализация массива
			fill_array(arr, line, column, Startnumber);//заполнение массива диагнолями
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < column; j++) {
					Assert::AreEqual(arrTest[i][j], arr[i][j]);
				}
			}
			free_arr(arr, line);
		}

	};
}