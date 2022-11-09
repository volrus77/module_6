#pragma once
#include "Device.h"
#include "Appliances.h"

class Quadrocopter : public Device, Appliances
{
public:
	Quadrocopter(int battaryLife, double weight);

	void ShowSpec() override;
};
