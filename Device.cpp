#include <iostream>
#include "Device.h"


// ������ ��������� � ���� ��� ������ � Git - ������ ������� ������ ��� �������� ����
	Device::Device(int battaryLife) : _battaryLife(battaryLife)
	{

	}

	void Device::ShowSpec()
	{
		std::cout << "LifeTime :" << _battaryLife << std::endl;
	}



	Player::Player(int battaryLife, int totalTracks) : Device(battaryLife), _totalTracks(totalTracks)
	{

	}

	void Player::ShowSpec()
	{
		std::cout << "LifeTime :" << _battaryLife << std::endl;
		std::cout << "TotalTracks :" << _totalTracks << std::endl;
	}

	Smartphon::Smartphon(int battaryLife, const std::string& maker) : Device(battaryLife), _maker(maker)
	{

	}

	void Smartphon::ShowSpec() 
	{
		std::cout << "LifeTime :" << _battaryLife << std::endl;
		std::cout << "Maker :" << _maker << std::endl;
	}

