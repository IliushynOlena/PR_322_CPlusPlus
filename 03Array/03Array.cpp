#include <iostream>
using namespace std;

int main()
{
    /*
    int a;
    const int size = 3;
    //cin >> size;
    //int arr[size]={};
    //int arr[size]={1,2,3};
    int arr[]={ 1,2,3 };
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    arr[0] = 100;
    arr[1] = 102;
    arr[2] = 103;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl; for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
   
    const int size2 = 10;
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        cout << "Enter " << i + 1 << " number : ";
        cin >> arr2[i];
    }
    for (int i = 0; i < size2; i++)
    {       
        cout<< arr2[i]<<" ";
    }
    */
    //1.Написати програму, яка знаходить суму всіх від'ємних
    //    значень у масиві. size = 10;
   /* const int  SIZE = 10;
    int arr[SIZE] = { 5, 7, 12, 32, 56, 126, 89, 89, 890, 745 };
    int sum2 = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0)
        {
            sum2 += arr[i];
        }
    }
    cout << "Sum: " << sum2 << endl;*/

   /* 2.Написати програму, яка знаходить мінімальне й мак -
        симальне значення в масиві і виводить їх на екран.*/

   /* 3.Знайти останнє додатне і перше
        від'ємне число в масиві. */

  /*  4. Задано масив A, що містить 100 цілих чисел.
        Знайти суму елементів цього масиву.*/

    srand(time(NULL));
    int a;
    a = rand()%100;
    cout << a <<  endl;

    a = rand() % 100;
    cout << a << endl;
    const int  SIZE = 10;
    int arr[SIZE];
    //rand()% x - 0....x

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 10; 
        cout << arr[i] << " ";
    }

    //10 - 20;
   // rand() % ( y - x) + x     x....y
    a =  10 + rand() %10;//0 1 2 3 4 5 6 7 8 9
    cout << a << endl;
    
    //5.Задано масив B, що містить 20 дійсних чисел.Знайти суму елементів 
    //    масиву, що лежать на парних позиціях.Вважати, 
    //    що позиції 0, 2, 4 і т.д.є парними.

   

}

