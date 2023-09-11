#include <iostream>
using namespace std;

int main()
{
	/*
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}*/

	int A = 10;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i >= j && i + j >= A - 1)
			{
				cout << "|===|";
			}
			else
				cout << "     ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 7; i++)//0 true
	{
		for (int j = 0; j < A; j++)
		{
			cout << "|###|";
			//if (i == 5) { i = 7; break; }
		}
		cout << endl;
		//if (i == 5)break;
	}
	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << " + ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << " # ";
		}
		cout << endl;
	}

	int N = 5;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j)
				cout << " + ";
			else
				cout << " = ";
				
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i +j == N- 1)
				cout << " + ";
			else
				cout << " = ";

		}
		cout << endl;
	}
}

