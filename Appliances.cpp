#include <iostream>
#include "Appliances.h"

Appliances::Appliances(double weight) : _weight(weight)
{

}

void Appliances::ShowSpec()
{
	std::cout << "Weight :" << _weight << std::endl;
}

TV::TV(double weight, int diagonal) : Appliances(weight), _diagonal(diagonal)
{

}

void TV::ShowSpec()
{
	std::cout << "Weight :" << _weight << std::endl;
	std::cout << "Diagonal :" << _diagonal << std::endl;
}

Fridge::Fridge(double weight, const std::string& color) : Appliances(weight), _color(color)
{

}

void Fridge::ShowSpec()
{
	std::cout << "Weight :" << _weight << std::endl;
	std::cout << "Color :" << _color << std::endl;
}