#include <iostream>
using namespace std;

int Foo(int a)
{

	if (a < 1)
		return 0;

	cout << "Hello" << a << endl;
	a--;
	return Foo(a);

}
int SummaArr(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Summa(int arr[], int size, int i)
{
	if (i + 1 == size)
		return arr[i];
	
	return arr[i] + Summa(arr, size, i+1);
}

int CountNumber(int arr[], int size, int i, int key)
{
	if (i == size)
		return 0;

	if (arr[i] > key)
		return CountNumber(arr, size, i + 1, key) + 1;
	else
		return CountNumber(arr, size, i + 1, key);


}

int main()
{
	const int size = 7;
	int arr[size] = { 1,2,3,4,5,6,7 };
	cout << "Summa = " << SummaArr(arr, size) << endl;
	//1 + 2 + 3 + 4 + 5 + 6 
	cout<< Summa(arr, size, 0)<<endl;

	cout << CountNumber(arr, size, 0, 3)<<endl;

	



	/*Foo(10);
	if (true)
	{

	}
	else if (true)
	{

	}
	else if (true)
	{

	}
	else if (true)
	{

	}
	else
	{

	}*/
	/////
	/*int i = 0;
	while (i<10)
	{
		cout << "Hello" << endl;
		i++ ;
	}*/
}

