#include<iostream>
#include<windows.h>
#include<string>
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Parrot.h"
using namespace std;

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	/*Pet a("Муся", "кошка");
	cout << "Вид питомца - " << a.Type() << endl;
	cout << "Имя питомца - " << a.Name() << endl << endl;
	string name, type;
	cout << "Введите имя вашего любимца - ";
	cin >> name;
	cout << "Введите вид животного - ";
	cin >> type;
	Pet b(name, type);
	cout << b.to_string() << endl;*/

	Cat c("Муся", "кошка", "манчкин", "компьютерный стол");
	Dog d("Тимка", "собака", "корги", "резиновое кольцо");
	Parrot p("Гоша", "попугай", "жако", 7);
	
	cout << "Вид питомца\t" << "Имя\t" << "Порода\t\t" << "Оссобенности\n";
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << c.Type() << "\t\t" << c.Name() << "\t" << c.Breed() << "\t\t" << c.Place() << " - любимое место в доме\n";
	cout << d.Type() << "\t\t" << d.Name() << "\t" << d.Breed() << "\t\t" << d.Toy() << " - любимая игрушка\n";
	cout << p.Type() << "\t\t" << p.Name() << "\t" << p.Breed() << "\t\t" << p.Age() << " - лет (возраст)\n";

}