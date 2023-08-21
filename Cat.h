#pragma once
#include<iostream>
#include<string>
#include "Pet.h"
// ����� ����������� �����, ��������� ������ "�������� ��������"
class Cat :
    public Pet
{
private:
    std::string breed;  // ������ �����
    std::string place;  // ������� ����� ������� � ����
public:
    // �����������
    Cat(std::string name, std::string type, std::string breed, std::string place);
    // setters & getters
    std::string& Breed();
    std::string& Place();
    // ����� ������
    std::string to_string();
};

