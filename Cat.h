#pragma once
#include<iostream>
#include<string>
#include "Pet.h"
// Класс описывающий кошек, наследник класса "Домашние животные"
class Cat :
    public Pet
{
private:
    std::string breed;  // порода кошки
    std::string place;  // любимое место питомца в доме
public:
    // Конструктор
    Cat(std::string name, std::string type, std::string breed, std::string place);
    // setters & getters
    std::string& Breed();
    std::string& Place();
    // Метод вывода
    std::string to_string();
};

