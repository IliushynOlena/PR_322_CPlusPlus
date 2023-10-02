#include <iostream>
using namespace std;

struct Date//32
{
    int day;//4
    int month;//4
    int year;//4
    int weekday;//4
    char month_name[15];//15
};

struct Student
{
    string name;
    string surname;
    unsigned short age;
    float mark;
    Date birthday;
    Date introToUniversity;
};

void Show(Student Nick)
{
    cout << "Name : " << Nick.name << endl;
    cout << "Surname : " << Nick.surname << endl;
    cout << "Age : " << Nick.age << endl;
    cout << "Mark : " << Nick.mark << endl;
    cout << "Day birthday : " << Nick.birthday.day << endl;
    cout << "Month birthday : " << Nick.birthday.month << endl;
    cout << "Year birthday : " << Nick.birthday.year << endl;

    cout << "Day intro to University : " << Nick.introToUniversity.day << endl;
    cout << "Month intro to University : " << Nick.introToUniversity.month << endl;
    cout << "Year intro to University : " << Nick.introToUniversity.year << endl;
    cout << endl;
}
Student Put()
{
    Student newSt;
    cout << "Enter name : "; cin >> newSt.name;
    cout << "Enter surname : "; cin >> newSt.surname;
    cout << "Enter age : "; cin >> newSt.age;
    cout << "Enter mark : "; cin >> newSt.mark;
    cout << "Enter Day birthday  : "; cin >> newSt.birthday.day;
    cout << "Enter Month birthday  : "; cin >> newSt.birthday.month;
    cout << "Enter Year birthday  : "; cin >> newSt.birthday.year;

    cout << "Enter intro to University day  : "; cin >> newSt.introToUniversity.day;
    cout << "Enter intro to University month  : "; cin >> newSt.introToUniversity.month;
    cout << "Enter intro to University year  : "; cin >> newSt.introToUniversity.year;
    return newSt;
}
void Init(Student st)
{
    //enter from keyboard
}
int main()
{
   Student st =  Put();
   Show(st);

    Student Nick = { "Nick","Jobs",23,11.3,{11,4,2000},{1,9,2023} };
    Show(Nick);
    Init(Nick);
    Show(Nick);

    cout << endl << "--------------------" << endl;
    Date d = { 2,10,2023,1,"October" };

    Date* ptr = nullptr;

    cout << d.day << endl;
    cout << d.month << endl;
    cout << d.year << endl;
    cout << d.weekday << endl;
    cout << d.month_name << endl;

    ptr = &d;

    cout << ptr->day << endl;
    cout << ptr->month << endl;
    cout << ptr->year << endl;
    cout << ptr->weekday << endl;
    cout << ptr->month_name << endl;
    cout << endl;
    Date test;
    test = d;
    cout << test.day << endl;
    cout << test.month << endl;
    cout << test.year << endl;
    cout << test.weekday << endl;
    cout << test.month_name << endl;


   
    

  


    string name = "Max";

    int a = 5;
    cout << sizeof(string) << endl;
   
    cout << sizeof(Nick) << endl;



    Date myBirthday = { 10,10,2000,5,"October" };
   
    cout << "--------------- My Birthday ---------------" << endl;
    cout << "Day : "<<  myBirthday.day << endl;
    cout << "Month : "<<  myBirthday.month << endl;
    cout << "Year : "<<  myBirthday.year << endl;
    cout << "Weekday : "<<  myBirthday.weekday << endl;
    cout << "Month name : "<<  myBirthday.month_name << endl;


    cout << "Enter day : "; cin >> myBirthday.day;
    cout << "Enter month : "; cin >> myBirthday.month;
    cout << "Enter year : "; cin >> myBirthday.year;
    cout << "Enter weekday : "; cin >> myBirthday.weekday;
    cout << "Enter month : "; cin >> myBirthday.month_name;

    cout << "--------------- My friend Birthday ---------------" << endl;
    cout << "Day : " << myBirthday.day << endl;
    cout << "Month : " << myBirthday.month << endl;
    cout << "Year : " << myBirthday.year << endl;
    cout << "Weekday : " << myBirthday.weekday << endl;
    cout << "Month name : " << myBirthday.month_name << endl;
  


}

