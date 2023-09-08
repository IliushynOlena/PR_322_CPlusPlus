#include <iostream>
using namespace std;

int main()
{
    //while
    //do while
    //for
    /*
    int counter = 0;
     
    while (counter < 7)
    {
        counter++;
        cout << "I read about " << counter << " wonder of world " << endl;
    }
    cout << "Now, I can write my essay" << endl;

  /*  do
    {

    } while (true);*/
    /*
    int res, a, b, key;
    cout << "Select operation : ";
    cout << "Enter 1 if you want to ADD " << endl;
    cout << "Enter 2 if you want to SUB " << endl;
    cout << "Enter 3 if you want to MULTY " << endl;
    cout << "Enter 4 if you want to DIV " << endl;
    cout << "Enter 0 if you want to Exit " << endl;
    cin >> key;
    while (key != 0)
    {
        switch (key)
        {
        case 1:
            cout << "Enter number a : ";
            cin >> a;
            cout << "Enter number b : ";
            cin >> b;
            res = a + b;
            cout << "Res : " <<res << endl;
            break;
        case 2:
            cout << "Enter number a : ";
            cin >> a;
            cout << "Enter number b : ";
            cin >> b;
            res = a - b;
            cout << "Res : " << res << endl;
            break;
        case 3:
            cout << "Enter number a : ";
            cin >> a;
            cout << "Enter number b : ";
            cin >> b;
            res = a * b;
            cout << "Res : " << res << endl;
            break;
        case 4:
            cout << "Enter number a : ";
            cin >> a;
            cout << "Enter number b : ";
            cin >> b;
            res = a / b;
            cout << "Res : " << res << endl;
            break;
        case 0:
            cout << "Exit" << endl;
            cout << "Have a nice day!!!" << endl;
            break;
        default:
            cout << "Error choice" << endl;
            break;
        }
        cout << "Select operation : ";
        cout << "Enter 1 if you want to ADD " << endl;
        cout << "Enter 2 if you want to SUB " << endl;
        cout << "Enter 3 if you want to MULTY " << endl;
        cout << "Enter 4 if you want to DIV " << endl;
        cout << "Enter 0 if you want to Exit " << endl;
        cin >> key;
    }
    cout << "Bye " << endl;
    
    */
    /*
    int res, a, b, key;
    do
    {
        cout << "Select operation : ";
        cout << "Enter 1 if you want to ADD " << endl;
        cout << "Enter 2 if you want to SUB " << endl;
        cout << "Enter 3 if you want to MULTY " << endl;
        cout << "Enter 4 if you want to DIV " << endl;
        cout << "Enter 0 if you want to Exit " << endl;
        cin >> key;
        switch (key)
        {
        case 1:
            cout << "Enter number a : ";
            cin >> a;
            cout << "Enter number b : ";
            cin >> b;
            res = a + b;
            cout << "Res : " << res << endl;
            break;
        case 2:
            cout << "Enter number a : ";
            cin >> a;
            cout << "Enter number b : ";
            cin >> b;
            res = a - b;
            cout << "Res : " << res << endl;
            break;
        case 3:
            cout << "Enter number a : ";
            cin >> a;
            cout << "Enter number b : ";
            cin >> b;
            res = a * b;
            cout << "Res : " << res << endl;
            break;
        case 4:
            cout << "Enter number a : ";
            cin >> a;
            cout << "Enter number b : ";
            cin >> b;
            res = a / b;
            cout << "Res : " << res << endl;
            break;
        case 0:
            cout << "Exit" << endl;
            cout << "Have a nice day!!!" << endl;
            break;
        default:
            cout << "Error choice" << endl;
            break;
        }
    } while (key != 0);
 */
/*
    int i = 0;

    while (i < 7)
    {
        i++;
        cout << "I read about " << i << " wonder of world " << endl;
    }
    cout << "-------------------------------------" << endl;
    for (int i = 1; i <= 7; i++)
    {
        cout << "I read about " << i << " wonder of world " << endl;
    }
    // Show number 1 to 10
    for (int i = 0; i <= 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    int x = 0;
    for (    ; x < 10; x++)
    {
        if (x % 2 == 0)
            cout << x << " ";
    }
    cout << endl;
    int y = 0;
    for (; y < 10; y += 2)
    {     
        cout << y << " ";
    }

    for (int i = 0;   ; i++)
    {
        if (i == 10)break;
        cout << i << " ";
    }

    

    for (int i = 0; i < 26; i++)
    {
        if (i % 2 == 0)
            continue;  
        
        cout << i << " ";

      

        //if (i == 7)break;
        //code
    }
    */


   

    for (int i = 0; i < 7; i++)//0 true
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "|###|";
            if (i == 5) { i = 7; break; }
        }
        cout << endl;
        //if (i == 5)break;
    }
    cout << endl;
   

}
