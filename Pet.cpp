#include "Pet.h"

Pet::Pet()
	: Pet("undefined", "undefined")
{
}

Pet::Pet(std::string name, std::string type)
	: name{ name }, type{ type }
{
}

std::string Pet::to_string()
{
	return name + " - " + type;
}

std::string& Pet::Name()
{
	return name;
}

std::string& Pet::Type()
{
	return type;
}

