#pragma once
#include<iostream>
#include<string>
// Класс описывающий домашних животных
class Pet
{
protected:
	std::string name;  // имя домашнего любимца
	std::string type;  // вид животного
public:
	// Конструкторы
	Pet();
	Pet(std::string name, std::string type);
	// Метод вывода
	std::string to_string();
	// setters & getters
	std::string& Name();
	std::string& Type();
};

