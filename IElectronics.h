#pragma once

class IElectronics
{
public:
	virtual ~IElectronics() = default;
	virtual void ShowSpec() = 0;
};

