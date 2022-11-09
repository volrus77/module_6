#pragma once
#include "IElectronics.h"

class Appliances : virtual public IElectronics
{
public:
	Appliances(double weight);
	void ShowSpec() override;

protected:
	double _weight;
};

class TV final : public Appliances
{
public:
	TV(double weight, int diagonal);
	void ShowSpec() override;

protected:
	int _diagonal;
};

class Fridge final : public Appliances
{
public:
	Fridge(double weight, const std::string& color);
	void ShowSpec() override;

private:
	std::string _color;
};

