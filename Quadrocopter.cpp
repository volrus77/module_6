#include <iostream>
#include "Quadrocopter.h"


Quadrocopter::Quadrocopter(int battaryLife, double weight) : Device(battaryLife), Appliances(weight)
{

}

void Quadrocopter::ShowSpec()
{
	std::cout << "BattaryLife :" << _battaryLife << " Weight :" << _weight << std::endl;
}