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
	
	/*Pet a("����", "�����");
	cout << "��� ������� - " << a.Type() << endl;
	cout << "��� ������� - " << a.Name() << endl << endl;
	string name, type;
	cout << "������� ��� ������ ������� - ";
	cin >> name;
	cout << "������� ��� ��������� - ";
	cin >> type;
	Pet b(name, type);
	cout << b.to_string() << endl;*/

	Cat c("����", "�����", "�������", "������������ ����");
	Dog d("�����", "������", "�����", "��������� ������");
	Parrot p("����", "�������", "����", 7);
	
	cout << "��� �������\t" << "���\t" << "������\t\t" << "������������\n";
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << c.Type() << "\t\t" << c.Name() << "\t" << c.Breed() << "\t\t" << c.Place() << " - ������� ����� � ����\n";
	cout << d.Type() << "\t\t" << d.Name() << "\t" << d.Breed() << "\t\t" << d.Toy() << " - ������� �������\n";
	cout << p.Type() << "\t\t" << p.Name() << "\t" << p.Breed() << "\t\t" << p.Age() << " - ��� (�������)\n";

}