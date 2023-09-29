#include <iostream>
#include <iomanip>
using namespace std;

void Fill(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 90 + 10;
		}
	}
}

void Show(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(3)<< arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "-----------------------------" << endl << endl;
}
void Fill(int* arr, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		arr[i] = rand() % 10;
	}
}
int** AddRow(int** arr, int &rows, int cols)
{
	int** temp = new int* [rows + 1];//5
	for (int i = 0; i < rows; i++)
	{
		temp[i] = arr[i];
	}
	temp[rows] = new int[cols];
	Fill(temp[rows], cols);
	delete[]arr;
	rows++;
	return temp;
}

int** AddRowByPos(int** arr, int& rows, int cols, int pos)
{
	int** temp = new int* [rows + 1];
	for (int i = 0; i < pos; i++)
	{
		temp[i] = arr[i];
	}
	temp[pos] = new int[cols];
	Fill(temp[pos], cols);
	for (int i = pos + 1; i < rows + 1; i++)
	{
		temp[i] = arr[i-1];
	}
	delete[]arr;
	rows++;
	return temp;
}

int ** AddColInTheEnd(int** arr, int rows, int& cols)
{
	int** temp = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols + 1];			
	}

	for (int i = 0; i < rows; i++)//4
	{
		for (int j = 0; j < cols; j++)//5
		{
			temp[i][j] = arr[i][j];
		}
	}

	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
	//arr = temp;

	for (int i = 0; i < rows; i++)
	{
		temp[i][cols] = 7;
	}
	cols++;
	return temp;
}

void DellLastRows(int** &arr, int& rows)
{
	int** temp = new int* [rows - 1];
	for (int i = 0; i < rows-1; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr[rows - 1];
	delete[]arr;
	rows--;
	arr = temp;
	//return temp;
}

int main()
{
	int rows = 4;
	int cols = 5;

	/*cout << "Enter rows count : ";
	cin >> rows;
	cout << "Enter cols count : ";
	cin >> cols;*/

	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	Fill(arr, rows, cols);
	Show(arr, rows, cols);

	arr = AddRow(arr, rows, cols);
	Show(arr, rows, cols);

	arr = AddRowByPos(arr, rows, cols, 2);
	Show(arr, rows, cols);

	DellLastRows(arr, rows);
	Show(arr, rows, cols);

	DellLastRows(arr, rows);
	Show(arr, rows, cols);
	

	arr = AddColInTheEnd(arr, rows, cols);
	Show(arr, rows, cols);

	arr = AddColInTheEnd(arr, rows, cols);
	Show(arr, rows, cols);




	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
}

