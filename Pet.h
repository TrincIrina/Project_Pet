#pragma once
#include<iostream>
#include<string>
// ����� ����������� �������� ��������
class Pet
{
protected:
	std::string name;  // ��� ��������� �������
	std::string type;  // ��� ���������
public:
	// ������������
	Pet();
	Pet(std::string name, std::string type);
	// ����� ������
	std::string to_string();
	// setters & getters
	std::string& Name();
	std::string& Type();
};

