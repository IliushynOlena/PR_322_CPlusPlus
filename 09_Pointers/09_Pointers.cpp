#include <iostream>
using namespace std;

void ChangeVar(int a)
{
    cout << "a = " << a << endl;
    a++;
    cout << "a = " << a << endl;
}
void ChangeVar(int *a)//00000dsfs6f6sd5f465s
{
    cout << "a = " << a << endl;
    (*a)++;
    cout << "a = " << a << endl;
}
int FindMax(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    if (b > a && b > c)
        return b;
    return c;
}
int* FindMax(int *a, int *b, int *c)
{
    if (*a > *b && *a > *c)
        return a;
    if (*b > *a && *b > *c)
        return b;
    return c;
}
void InitArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
       // arr[i] = rand() % 100;
        *(arr + i) = rand() % 30;
    }
}
void PrintArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        //cout << arr[i] << " ";
        cout << *(arr + i) << " ";
    }
    cout << endl;
}
int* FindMax(int* arr, int size)
{
    int* max = arr;

    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > *max)
        {
            max = arr + i;
        }
    }
    return max;
}
//#define NULL 0
void swap(int* pa, int* pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void swap1(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}


int main()
{
    srand(time(0));
   /* int a = 5;
    cout << a << endl;
    int* pa = &a;

    cout << pa << endl;
    cout << *pa << endl;
    int b = 10;
    int* pb = &b;

    cout << a + b << endl;
    cout << (*pa) + (*pb) << endl;

    pa = &b;
    cout << *pa << endl;
    *pa += 2;
    cout << b << endl;
    cout << *pb << endl;
    cout << *pa << endl;*/
    int a = 3; int b = 7;
    int* pa, * pb, * ptemp;
    pa = &a;
    pb = &b;
    /*
    cout << "a=" << a << " pa=" << pa << endl << "b=" << b << " pb=" << pb << endl;
    cout << "\nzminuemo adresi miscyami\n" << endl;
    ptemp = pa;
    pa = pb;
    pb = ptemp;*/
    cout << "a=" << a << " pa=" << pa << endl << "b=" << b << " pb=" << pb << endl;

    swap(&a, &b);
    cout << "a=" << a << " pa=" << pa << endl << "b=" << b << " pb=" << pb << endl;

    swap(&a, &b);
    cout << "a=" << a << " pa=" << pa << endl << "b=" << b << " pb=" << pb << endl;

    cout << "4" << endl;
    swap(pa, pb);
    cout << "a=" << a << " pa=" << pa << endl << "b=" << b << " pb=" << pb << endl;

   // int *pa, *pb, *pc;
   // int a = 5, b = 6, c = 7;
   // pa = &a;
   // pb = &b;
   // pc = &c;

   // int* ptr = 0;
   // if (ptr != 0) {//code
   // }
   //
   // //cout << *ptr;
   // int* ptr2 = NULL;
   // if (ptr2 != NULL) {//code
   // }
   // //cout << *ptr;
   // int* ptr3 = nullptr;
   // if (ptr3 != nullptr) {//code
   // }

   // const int size = 30;
   // int arr[size];// = { 11 ,4, 2 ,7, 3 ,9 };
   // InitArray(arr, size);
   // PrintArray(arr, size);

   //int *max =  FindMax(arr, size);
   //cout << "Max = " << *max << endl;
   //*max = (*max) * 2;
   //PrintArray(arr, size);
   /* int a = 0, b = 0, c = 0;
    cout << "Enter numbers ";
    cin >> a >> b >> c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    int max = FindMax(a, b, c);
    max++;
    cout << "max = " << max << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

   int *pmax =  FindMax(&a, &b, &c);
   (*pmax)++;
   cout << "pmax = " << pmax << endl;
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
   cout << "c = " << c << endl;*/


  /* int a = 6;
   cout << "a = "<<  a << endl;
   ChangeVar(a);
   cout << "a = "<<  a << endl;
   ChangeVar(&a);
   cout << "a = "<<  a << endl;*/
    //const int size = 10;
    //int arr[size];
    //int a = 5;
    //cout << a << endl;
    //cout << a + 1 << endl;//a + 1
    //cout << 5 + 1 << endl;
    //cout << a << endl;
    //a++;//a = a + 1
    //a += 1;
    //cout << a << endl;
    //int* parr = &arr[0];

    /*for (int i = 0; i < size; i++)
    {
        *(parr + i) = rand() % 100;
    }
    cout << arr << endl;
    cout << parr << endl;
    cout << *arr << endl;
    cout << *parr << endl;*/
   /* for (int i = 0; i < size; i++)
    {
        *parr = rand() % 100; 
        parr++;
    }
    parr = arr;
    for (int i = 0; i < size; i++)
    {
        cout<< *parr <<" ";
        parr++;
    }
    cout<<endl;
    int* newp = arr;
    *newp = 0;
    newp += 3;
    *newp = 0;

    parr = arr;
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr++;
    }
    cout << endl;
    parr--;
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr--;
    }

    int* find = arr;
    int num = 10;
    for (int i = 0; i < size; i++)
    {
        if (*(arr+i) == num) 
        {
            find = arr+i;
        }
    }
    cout << endl;
    cout << *find << endl;
    cout << find << endl;*/

   /* for (int i = 0; i < size; i++)
    {
        *(parr+i) = rand() % 100;
    }
    cout << parr << endl;
    cout << *parr << endl;
    cout << parr + 1 << endl;
    cout << *(parr + 1) << endl;
    cout << *parr + 1 << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(parr + i) <<" ";
    }
    cout << endl;*/
}

