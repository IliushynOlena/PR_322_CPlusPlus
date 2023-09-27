#include <iostream>
#include <conio.h>
using namespace std;

void Test1()
{
    const int size = 5;
    int arr[size];
}
void Test2()
{
    int size = 5;
    int* parr = new int[size];
    //use it
    //code
    delete [] parr;
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
int* CreateArray(int size)
{
    int* arr = new int[size];
    return arr;
}
int* AddNumber(int* arr, int *size, int number)
{
    (*size)++;
    int* temp = new int[*size];
    for (int i = 0; i < (*size) - 1; i++)
    {
        temp[i] = arr[i];
    }
    temp[*size - 1] = number;
    delete[]arr;
    arr = temp;
    return arr;
}
int main()
{
    int size;
    cout << "Enter size : ";
    cin >> size;
    int * arr =  CreateArray(size);
    //int* arr = new int[size];
    InitArray(arr, size);
    PrintArray(arr, size);

    int number;
    char choice = 'y';
    while (true)
    {
        cout << "Do you want to add number ? y/n" << endl;
        //cin >> choice;
        choice = _getch();
        if (choice == 'n')break;

        cout << "Enter new number: ";
        cin >> number;
        arr = AddNumber(arr, &size, number);
        system("cls");
        PrintArray(arr, size);
       
    }
    delete[]arr;




    //int a = 5;
    //int* pa = new int(3);
   
    //int* pb = new int;
    //int* pc = nullptr;

    ////cout << *pc << endl;//error

    //pc = new int(12);
    //*pb = 5;

    //delete pc;
    //pc = pb;

    //cout << pa << endl;
    //cout << *pa << endl;
    //cout << pb << endl;
    //cout << *pb << endl;
    //cout << pc << endl;
    //cout << *pc << endl;


    //cout << *pa + *pb + *pc << endl;
    ////cout << pa + pb + pc << endl;


    //delete pa;
    //delete pb;
    //delete pc;


    //pc = new int(2);
    //cout << *pc << endl;

    //cout << pc << endl;
    //delete pc;
   /* cout << pc << endl;
    delete pc;
    delete pc;*/


    //int a = 12;
    //int b = 10;
    //int* pa;//nullptr
    //pa = &a;
    //int* const ptr = &a;//const pointer
    //cout << *ptr << endl;
    //cout << ptr << endl;
    //pa = &b;
    //*ptr = 95;
    ////ptr += 1;
    //cout<<  *(ptr + 1);
    //cout << *ptr << endl;
    ////ptr = &b;//error
    //const int  size = 10;
    ////pointer to const
    //int c = 73;
    //const int* pc;
    //pc = &c;

    //cout << pc << endl;
    //cout << *pc << endl;
    ////*pc = 122;///error
    //c = 100;
    //cout << *pc << endl;
    //int d = 88;
    //pc = &d;

    //cout << *pc << endl;
   
    //int number = 100;
    //const int* const ptr_number = &number;
    ////*ptr_number = 1000;//error
    ////ptr_number = &b;//error
}

