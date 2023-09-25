#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;
void SetColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void SetPos(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


//void ChangeValue(int a)
//{
//    a++;
//}
void ChangeValue(int *a)
{
    (*a)++;
}
void ChangeValue(int& a)
{
    a++;
}
int& FindMax(int& a, int& b)//00000xfr  //00036j
{
    if (a > b)return a;
    else return b;
}
int& FindMax(int* arr, int size)
{
    int max = arr[0];
    int maxIndex = 0;
    for (int i = 0; i < size; i++)
    {
        /*if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }*/
        if (*(arr + i) > max)
        {
            max = *(arr + i);
            maxIndex = i;
        }
    }
    return arr[maxIndex];
}
void InitArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        // arr[i] = rand() % 100;
        *(arr + i) = rand() % 30;
    }
}
void PrintArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        //cout << arr[i] << " ";
        cout << *(arr + i) << " ";
    }
    cout << endl;
}
void AnyLine(int symbol, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << (char)symbol;
    }
}
int main()
{
    //cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203;
    AnyLine(201, 1);
    AnyLine(205, 4);
    AnyLine(203, 1);
    AnyLine(205, 10);
    AnyLine(203, 1);
   /* for (int i = 0; i < 25; i++)
    {
        SetPos(i + 1, i);
        SetColor(i);cout << "Hello world" << endl;
    }
    SetColor(7);cout << "Hello world" << endl;
    SetColor(3);cout << "Hello world" << endl;
    SetColor(4);cout << "Hello world" << endl;
    SetColor(5);cout << "Hello world" << endl; SetColor(7);
    cout << "Hello world" << endl;
    cout << "Hello world" << endl;
    cout << "Hello world" << endl;
    cout << "Hello world" << endl;*/
    //cout << setw(30) << left <<"A" << endl;
  /*  cout << setw(30) <<"A" << endl;
    cout<<"A"<< setw(3) << endl;
    cout << "B" << endl;

    double x1 = -5, x2 = 2.7, x3 = 3.14;

    cout << setw(5) << x1 << endl;
    cout << setw(5) << x2 << endl;
    cout << setw(5) << x3 << endl;

    for (int i = 0; i <= 255; i++)
    {

      cout << "code = "<< i << "char = "<<  (char)i << endl;
    }*/

   
    /*
    const int size = 10;
     int arr[size];// = { 11 ,4, 2 ,7, 3 ,9 };
     InitArray(arr, size);
     PrintArray(arr, size);
     FindMax(arr, size) = 0;
     PrintArray(arr, size);

    int a = 5;//00000xfr
    int b = 10;//00036j
    cout << "a = " << a << endl;
    ChangeValue(a);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    //int max = FindMax(a, b);
    FindMax(a, b) = 1;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    //cout << "max = " << max << endl;

    */
    /*
    int b = 10;
    int& lb = b;
    int* pb = &b;//00000xc12zxczxz23f
    //int* pc;//garbage
    //cout << *pc;//error
    int* pc = nullptr;

    int a = 5;
    int* pa = &a;//address - pointer
    int& la = a;//link
    cout << "a = "<< a << endl;
    cout << "*pa = "<< * pa << endl;
    cout << "pa = " << pa << endl;
    cout << "&la = " << la << endl;
    cout << "Summa = " << a + b << endl;
    cout << "Summa = " << la + lb << endl;
    //la = b;//error
    //cout << "&la = " << la << endl;
    //cout << "&la = " << a << endl;
    //int& lc;//error
    */

}

