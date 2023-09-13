#include <iostream>
#include <iomanip>
using namespace std;
//function

void Hello()
{
	cout << "Hello world!" << endl;
}
void Star(int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << " * ";
	}
	cout << endl;
}
void AnyLine(char symbol, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << setw(2) << symbol ;
	}
	cout << endl;
}
int Pow(int num, int pow)
{
	int p = 1;
	for (int i = 0; i < pow; i++)
	{
		p *= num;
	}
	//cout << p << endl;
	return p;
}
void Second()
{
	cout << "Secon function" << endl;
}

void First()
{
	cout << "Begin first function" << endl;
	Second();
	cout << "End first function" << endl;

}

void Change(int One, int Two) 
{
	// 1 2
	cout << One << " " << Two << "\n\n";
	int temp = One;
	One = Two;
	Two = temp;	
	cout << One << " " << Two << "\n\n"; // 2 1
}


int main()
{
	int a = 1, b = 2;
	cout << a << " " << b << "\n\n"; // 1 2
	// передача за значенням
	Change(a, b);
	cout << a << " " << b << "\n\n"; // 1 2
	First();
	cout << "Pow : " << Pow(2, 6) << endl;
	int res = Pow(5, 5);
	cout << "Res : " << res << endl;
	/*AnyLine(1, '+');
	AnyLine(2, '=');*/
	AnyLine('+', 12);
	AnyLine('=' ,22);

	Star(5);
	Star(10);
	Star(15);

	Hello();
	Hello();
	Hello();
	Hello();
	Hello();
   //Hello(); 
}
