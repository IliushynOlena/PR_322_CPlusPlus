#include <iostream>
#include <fstream>
using namespace std;

struct  Movie
{
	int id;
	char name[50];
	char director[20];
	char genre[20];
	float rating;
	float price;
};
void Show(Movie m)
{
	cout << "\t\tId: " << m.id << endl;
	cout << "\t\tName: " << m.name << endl;
	cout << "\t\tDirector: " << m.director << endl;
	cout << "\t\tGenre: " << m.genre << endl;
	cout << "\t\tRating: " << m.rating << endl;
	cout << "\t\tPrice: " << m.price << "$" << endl;
}
void SearchByName(Movie movies[], int size, char name[])
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(movies[i].name, name) == 0)
		{
			Show(movies[i]);
		}
	}
}
void SearchByDirector(Movie movies[], int size, char director[])
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(movies[i].director, director) == 0)
		{
			Show(movies[i]);
		}
	}
}
void SearchByGenre(Movie movies[], int size, char genre[])
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(movies[i].genre, genre) == 0)
		{
			Show(movies[i]);
		}
	}
}
void MostPopular(Movie movies[], int size, char genre[])
{
	float maxRating = 0;
	int maxIndex = 0;
	for (int i = 0; i < size; i++)
	{
		if (strcmp(movies[i].genre, genre) == 0)
		{
			if (movies[i].rating > maxRating)
			{
				maxRating = movies[i].rating;
				maxIndex = i;
			}
		}
	}
	Show(movies[maxIndex]);
}
void ChangeData(Movie movies[], int size, int id)
{
	for (int i = 0; i < size; i++)
	{
		if (movies[i].id == id) 
		{
			Show(movies[i]);
			cout << "\t\tEnter new id : ";
			cin >> movies[i].id;
			cin.ignore();
			cout << "\t\tEnter new name : ";
			//cin >> movies[i].name;
			cin.getline(movies[i].name, 50);
			cout << "\t\tEnter new director : ";
			//cin >> movies[i].director;
			cin.getline(movies[i].director, 20);
			cout << "\t\tEnter new genre : ";
			//cin >> movies[i].genre;
			cin.getline(movies[i].genre, 20);
			cout << "\t\tEnter new price : ";
			cin >> movies[i].price;
		}
	}
}


const char* FILENAME = "D://HumansDatabase.txt";
struct Human//public
{
private:
	char name[50];
	char surname[50];
	int age;
public:
	void Fill()
	{
		cout << "Enter name : ";
		cin >> name;
		cout << "Enter surname : ";
		cin >> surname;
		cout << "Enter age : ";
		cin >> age;
	}
	void Show()
	{
		cout << "Name : " << name << "\nSurname : " << surname << "\nAge : " <<age << endl;
	}
	void Copy(Human h)
	{
		strcpy_s(name, strlen(h.name)+1, h.name);
		strcpy_s(surname, strlen(h.surname)+1, h.surname);
		age = h.age;
	}
	void SaveToFile()
	{
		ofstream out(FILENAME, ios_base::app);
		out << name;
		out << ":";
		out << surname;
		out << ":";
		out << age;
		out << "|";
		out.close();
	}
	void FillFromFile(char* nameF, char* surnameF, int ageF)
	{
		strcpy_s(name, strlen(nameF) + 1, nameF);
		strcpy_s(surname, strlen(surnameF) + 1, surnameF);
		age = ageF;
	}
};

int Menu()
{
	int choice;
	cout << "1.Add person : " << endl;
	cout << "2.Show all : " << endl;
	cout << "3.Exit : " << endl;
	cin >> choice;
	return choice;
}
enum Menu{ ADD = 1, SHOW, EXIT };
void AddHuman(Human* &humans, int &size)
{
	//size++;
	Human* temp = new Human[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i].Copy(humans[i]);
	}
	temp[size].Fill();
	delete humans;
	humans = temp;
	size++;

	humans[size - 1].SaveToFile();
}
void ShowAll(Human* h, int size)
{
	for (int i = 0; i < size; i++)
	{
		h[i].Show();
	}
}

void LoadDataFromFile(Human*& humans, int& size)
{
	ifstream in(FILENAME);
	while (!in.eof())
	{
		char bufName[250], bufSurname[250], bufAge[250];
		in.getline(bufName, 250, ':');
		if (in.eof())break;
		in.getline(bufSurname, 250, ':');
		in.getline(bufAge, 250, '|');

		int age = atoi(bufAge);

		Human readedHuman;
		readedHuman.FillFromFile(bufName, bufSurname, age);

		Human* temp = new Human[size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i].Copy(humans[i]);
		}
		temp[size] = readedHuman;
		delete humans;
		humans = temp;
		size++;
	}
}


int main()
{
	/*Human Nick = {};
	Nick.Fill();
	Nick.Show();

	Human Nick = {};
	Nick.Fill();
	Nick.Show();*/

	int size = 0;
	Human* humans = new Human[size];

	LoadDataFromFile(humans, size);
	bool isExit = false;

	while (!isExit)
	{
		switch (Menu())
		{
		case Menu::ADD://1
			AddHuman(humans, size);
			break;
		case Menu::SHOW:ShowAll(humans, size);
			break;
		case Menu::EXIT:isExit = true;
			break;
		default:
			break;
		}
	}

	delete[]humans;



	
#pragma region VideoShop
	/*
	const int size = 5;
	Movie movies[size] = {
		{1, "Home alone 1","Cris Colambus", "Comedy",8.5, 19.99},
		{2, "Home alone 2","Cris Colambus", "Comedy",8.4, 19.5},
		{3, "Home alone 3","Cris Colambus", "Comedy",7.9, 18.5},
		{4, "Home alone 4","Cris Colambus", "Comedy",2.3, 10.10},
		{5, "Back To the future","Rober Zemeckis", "Fantasy",8.9, 2.5}
	};
	int key,id;
	char name[30];
	do
	{
		cout << "\t\t\t Menu" << endl;
		cout << "\t\tShow all movies :              [1]" << endl;
		cout << "\t\tSearch film by name :          [2]" << endl;
		cout << "\t\tSearch film by director :      [3]" << endl;
		cout << "\t\tSearch film by genre :         [4]" << endl;
		cout << "\t\tSearch the most popular film : [5]" << endl;
		cout << "\t\tChange data :                  [6]" << endl;
		cout << "\t\tExit                         : [0]" << endl;
		cin >> key;
		cin.ignore();
		switch (key)
		{
		case 1:
			for (int i = 0; i < size; i++)
			{
				Show(movies[i]); cout << endl;
			}
			break;
		case 2:
			cout << "Enter name movie to search : ";
			cin.getline(name, 30);
			SearchByName(movies, size, name);
			break;
		case 3:
			cout << "Enter director movie to search : ";
			cin.getline(name, 30);
			SearchByDirector(movies, size, name);
			break;
		case 4:
			cout << "Enter genre movie to search : ";
			cin.getline(name, 30);
			SearchByGenre(movies, size, name);
			break;
		case 5:
			cout << "Enter genre movie to search the most popular : ";
			cin.getline(name, 30);
			MostPopular(movies, size, name);
			break;
		case 6:
			cout << "Enter id of data : ";
			cin >> id;
			ChangeData(movies, size, id);
			break;
		case 0:
			cout << "Good bye!!!!";
			exit(0);
			break;
		default:
			cout << "Error choce!!!!";
			break;
		}


	} while (true);
	*/
#pragma endregion


	






   
}
