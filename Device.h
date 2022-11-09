#pragma once
#include "IElectronics.h"

class Device : virtual public IElectronics
{
public:
	Device(int battaryLife);
	void ShowSpec() override;

protected:
	int _battaryLife;
};

class Player final : public Device
{
public:
	Player(int battaryLife, int totalTracks);
	void ShowSpec() override;

private:
	int _totalTracks;
};

class Smartphon final : public Device
{
public:
	Smartphon(int battaryLife, const std::string& maker);
	void ShowSpec() override;

private:
	std::string _maker;
};
