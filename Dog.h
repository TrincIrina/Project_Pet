#pragma once
#include<iostream>
#include<string>
#include "Pet.h"
// ����� ����������� �����, ��������� ������ "�������� ��������"
class Dog :
    public Pet
{
private:
    std::string breed;  // ������ ������
    std::string toy;    // ������� ������� �������
public:
    // �����������
    Dog(std::string name, std::string type, std::string breed, std::string toy);
    // setters & getters
    std::string& Breed();
    std::string& Toy();
    // ����� ������
    std::string to_string();
};

