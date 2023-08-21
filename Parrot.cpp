#include "Parrot.h"

Parrot::Parrot(std::string name, std::string type, std::string breed, int age)
	: Pet(name, type), breed{ breed }, age{ age }
{
}

std::string& Parrot::Breed()
{
	return breed;
}

int& Parrot::Age()
{
	return age;
}

std::string Parrot::to_string()
{
	return Pet::to_string() + " - " + breed + " - " + std::to_string(age) + " year";
}
