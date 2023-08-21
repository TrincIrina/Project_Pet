#include "Cat.h"

Cat::Cat(std::string name, std::string type, std::string breed, std::string place)
	: Pet(name, type), breed{ breed }, place{ place }
{
}

std::string& Cat::Breed()
{
	return breed;
}

std::string& Cat::Place()
{
	return place;
}

std::string Cat::to_string()
{
	return Pet::to_string() + " - " + breed + " - " + place;
}
