#pragma once
#include<iostream>
#include<string>
#include "Pet.h"
// Класс описывающий попугаев, наследник класса "Домашние животные"
class Parrot :
    public Pet
{
private:
    std::string breed;  // порода попугая
    int age;            // возраст 
public:
    // Конструктор
    Parrot(std::string name, std::string type, std::string breed, int age);
    // setters & getters
    std::string& Breed();
    int& Age();
    // Метод вывода
    std::string to_string();
};

