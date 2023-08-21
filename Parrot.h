#pragma once
#include<iostream>
#include<string>
#include "Pet.h"
// ����� ����������� ��������, ��������� ������ "�������� ��������"
class Parrot :
    public Pet
{
private:
    std::string breed;  // ������ �������
    int age;            // ������� 
public:
    // �����������
    Parrot(std::string name, std::string type, std::string breed, int age);
    // setters & getters
    std::string& Breed();
    int& Age();
    // ����� ������
    std::string to_string();
};

