#include <iostream>
using namespace std;

int main()
{
	/*
	int n = 5;
	// Инициализация строкового массива.
	char line[5] = { 'C','a','t','!','\0' };
		cout << "Word: ";
		for (int i = 0; i < n; i++)
			cout << line[i];

		char mystring[] = "string";
		cout << mystring << " has " << sizeof(mystring) << " characters" << endl;

		for (int i = 0; i < sizeof(mystring); i++)
		{
			cout << static_cast<int>(mystring[i]) << " ";
		}

		//mystring = "cat";
		cout << mystring << endl;
		mystring[0] = 'S';
		cout << mystring << endl;
		int arr[] = { 1,2,3,4 };
		//arr = 7;
		arr[0] = 7;

		char name[15] = "Max";//Max\0cnvxgshdgoisahgpkashgasghaslghslkghskh
		cout << "My name is : " << name << endl;

		char newname[255];
		cout << "Enter your name : ";
		//cin >> newname;
		//cin.getline(newname, 255);
		//cout << "Name : " << newname << endl;

		char text[] = "Print this!";
		char dest[50];
		
		strcpy_s(dest, text);
		std::cout << dest; // выводим "Print this!"
		*/
		char name[15] = "Max"; // используется только 4 символа (3 буквы + нуль-терминатор)
		std::cout << "My name is " << name << '\n';
		std::cout << name << " has " << strlen(name) << " letters.\n";
		std::cout << name << " has " << sizeof(name) << " characters in the array.\n";


		char arr[255] = "Returns the head of a list.";
		cout << arr << endl;
		//cin >> arr;
		//int len = strlen(arr);//   ������� ������
		//cout << len;
		_strupr_s(arr);
		cout << arr << endl;

		_strlwr_s(arr);
		cout << arr << endl;

		_strrev(arr);
		cout << arr << endl;
		_strrev(arr);
		cout << "COPY ARRAYS: \n";
		char arr2[255] = {};
		strcpy_s(arr2, arr);
		cout << arr2 << endl;


		arr2[5] = '\0';
		cout << arr2 << endl;
		cout << "ADD TO ARRAY: \n";
		strcat_s(arr, "...");
		cout << arr << endl;
		cin >> arr2;
		strcat_s(arr, arr2);
		cout << arr << endl;
		////---������ � ����� n �������
		strncat_s(arr, arr2, 3);
		cout << arr << endl;

		string s1;             	// пустая строка
		string s2 = "hello";   	// hello
		string s3("welcome");  	// welcome
		string s4(5, 'h'); 	// hhhhh
		string s5 = s2;        	// hello

		cout << s1 << "\n";
		cout << s2 << "\n";
		cout << s3 << "\n";
		cout << s4 << "\n";
		cout << s5 << "\n";







}

