#include <iostream>
using namespace std;

void InitArray(int arr[], int size);
void PrintArray(int arr[], int size);
int SummaArray(int arr[], int size);
void InitMatrix(int arr[][6], int row, int col);
void PrintMatrix(int arr[][6], int row, int col);
int SummaMatrix(int arr[][6], int row, int col);

int A = 10;//0
int B = 100;
void SetA()
{
	A = 99;
}
void Show()
{
	cout << A << endl;
}
void SetSecond()
{
	int A = 77;
	cout << A << endl;
}
void Test()
{
	int A = 77;
	cout << A << endl;

	::A = 333;

	cout << ::A << endl;
	cout << A << endl;

}

void Foo(int i, int j)
{
	cout << i << " " << j << endl;
}
void Foo1(int i, int j = 7)
{
	cout << i << " " << j << endl;
}
//void Foo2(int i, int j = 2, int k)//Error 
// {
//	cout << i << " " << j << " " << endl;
//}
void Foo2(int i, int k , int j = 2) {
	cout << i << " " << j << " " << k << endl;
}
void Foo3(int i, int k = 3, int j = 7);
void Foo4(int i = 10, int k = 3, int j = 7) {
	cout << i << " " << j << " " << k << endl;
}
//void Foo5(int i = -2, int j);//error
void Star(int count = 20)
{
	for (int i = 0; i < count; i++)
	{
		cout << " * ";
	}
	cout << endl;
}

inline void SomeFunction()
{
	static int a = 0;
	a++;
	cout << a << endl;
}
template< typename Type_arr>
Type_arr MaxElement(Type_arr arr[], int size)
{
	Type_arr max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
template<typename T1, typename T2>
T2 Max(T1 A, T2 B) 
{
	/*if (A > B)
		return A;
	else
		return B;*/

	return  (A > B) ? A : B;
	//ymova ? true : false;



	//return A > B ? A : B;
}
/*
int MaxElement(int arr[], int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
long MaxElement(long arr[], int size)
{
	long max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
float MaxElement(float arr[], int size)
{
	float max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
double MaxElement(double arr[], int size)
{
	double max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
*/
double Multy(double x)
{
	return x * x * x;
}
double Multy(double x, double y)
{
	return x * y * x;
}
double Multy(double x, double y, double z)
{
	return x * y * z;
}
//double Multy(double x = 1.0, double y = 1.0, double z = 1.0, double d = 1.0)
//{
//	return x * y * z;
//}
int main()
{
	cout << "Multy : " << Multy(5.3) << endl;
	cout << "Multy : " << Multy(5.5,10.3) << endl;
	cout << "Multy : " << Multy(5,4,8) << endl;
	//cout << "Multy : " << Multy(5,4,8,3) << endl;


	const int size = 10;
	int arr_int[size] = { 10,20,30,40,50,60,70,80,90,100 };
	int arr_int2[size] = { 10,20,30,40,50,60,70,80,90,100 };
	long arr_long[size] = { 12l,44L,5L,22L,15L,45L,37L,25L,14L,36L };
	float arr_float[size] = { 1.2f,4.4f,5.2f,2.2f,1.5f,4.5f,3.7f,2.5f,1.4f,3.6f };
	double arr_double[size] = { 3.33,1.5,1.47,4.5,3.6,8.5,12.3,9.6,2.22,3.17 };
	cout << "Max int : " << MaxElement(arr_int, size) << endl;
	cout << "Max long : " << MaxElement(arr_long, size) << endl;
	cout << "Max float : " << MaxElement(arr_float, size) << endl;
	cout << "Max double : " << MaxElement(arr_double, size) << endl;

	cout << "Max int : " << MaxElement(arr_int2, size) << endl;

	/*
	SomeFunction();
	SomeFunction();
	SomeFunction();
	SomeFunction();
	SomeFunction();
	SomeFunction();



	Star(15);
	Star(3);
	Star(4);
	Star();

	Foo4(10, 11, 12);
	Foo4(10, 11);
	Foo4(10);
	Foo4();

	Foo2(1, 2, 3);
	Foo2(1, 2);


	Foo(5,9);
	Foo1(5, 10);
	Foo1(77);
	


	Test();
	Show();
	SetA();
	Show();
	SetSecond();
	Show();

	int A;//-8545651323
    int B = 25;
	cout << B << endl;
	/*int a = 5;
	if (a == 5)
	{
		int b = 10;
		cout << b << endl;
	}

    cout << b << endl;*/

	/*
	srand(time(0));
	const int row = 5;
	const int col = 6;
	int mass[row][col];
	InitMatrix(mass, row, col);
	PrintMatrix(mass, row, col);
	cout << "Summa matrix = " << SummaMatrix(mass, row, col) << endl;

    const int size = 10;
    int arr[size];

	InitArray(arr, size);
	PrintArray(arr, size);
	int sum = SummaArray(arr, size);
	cout << "\nSumma elements = "<< sum;
	cout << "\nSumma elements = "<< SummaArray(arr, size);*/


}

void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
int SummaArray(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}
void InitMatrix(int arr[][6], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 90 + 10;//10-99
		}
	}
}
void PrintMatrix(int arr[][6], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
int SummaMatrix(int arr[][6], int row, int col)
{
	int summa = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			summa += arr[i][j];
		}

	}
	return summa;
}

