#pragma once
#include<iostream>
#include<string>
#include "Pet.h"
// Класс описывающий собак, наследник класса "Домашние животные"
class Dog :
    public Pet
{
private:
    std::string breed;  // порода собаки
    std::string toy;    // любимая игрушка питомца
public:
    // Конструктор
    Dog(std::string name, std::string type, std::string breed, std::string toy);
    // setters & getters
    std::string& Breed();
    std::string& Toy();
    // Метод вывода
    std::string to_string();
};

