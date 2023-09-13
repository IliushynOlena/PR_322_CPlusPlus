#include <iostream>
#include <iomanip>
//#include <ctime>
//#include <stdlib.h>
//#include <time.h>
using namespace std;

int main()
{
	srand(time(0));
	const int rows = 5;
	const int cols = 6;
	int arr[rows][cols];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100; 
			//cout << "\t"<< arr[i][j] << " ";
			cout << setw(5) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;




	int array1[2][2] = { {1,2},{3,4} };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << array1[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int array2[2][2] = { 7,8,9,10 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << array2[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	/*int b = 3.14;
	cout << b << endl;
	int a{ 5.3 };
	cout << a << endl;
	int c(10);
	cout << c << endl;*/
	//int array3[3][3]  { {7,8},{10,3,5} };
	int array3[3][3]  { 7,8,10,3,5 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << array3[i][j] << " ";
		}
		cout << endl;
	}


}

