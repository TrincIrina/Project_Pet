#include "Dog.h"

Dog::Dog(std::string name, std::string type, std::string breed, std::string toy)
	: Pet(name, type), breed{ breed }, toy{ toy }
{
}

std::string& Dog::Breed()
{
	return breed;
}

std::string& Dog::Toy()
{
	return toy;
}

std::string Dog::to_string()
{
	return Pet::to_string() + " - " + breed + " - " + toy;
}
