// main.cpp 

#include <iostream>
#include "Appliances.h"
#include "Device.h"
#include "Quadrocopter.h"


int main()
{

	setlocale(LC_ALL, "");
	/*Device dev(100);
	dev.ShowSpec();

	Player sony(150, 2000);
	sony.ShowSpec();


	Smartphon sm(239, "Samsung");
	sm.ShowSpec();

	TV Nash(18, 55);
	Nash.ShowSpec();

	Fridge Fr(45, "blue");
	Fr.ShowSpec();

	Quadrocopter Qc(500, 2400);
	Qc.ShowSpec();*/

	IElectronics* bonny[5];
	bonny[0] = new Player(150, 2000);
	bonny[1] = new Smartphon(239, "Apple");
	bonny[2] = new TV(13, 32);
	bonny[3] = new Fridge(55, "black");
	bonny[4] = new Quadrocopter(450, 1900);

	bool open = true;
	while (open)
	{
		std::cout << "Выберете технику : 1 - плейер, 2 - смартфон, 3 - телевизор, 4 - холодильник, "
			<< "5 - квадрокоптер, 0 - чтобы выйти." << std::endl;

		int choice;
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			bonny[0]->ShowSpec();
			break;

		case 2:
			bonny[1]->ShowSpec();
			break;

		case 3:
			bonny[2]->ShowSpec();
			break;

		case 4:
			bonny[3]->ShowSpec();
			break;

		case 5:
			bonny[4]->ShowSpec();
			break;

		case 0:
			open = false;
			break;

		default:
			std::cout << "Выберете технику от 1 до 5 или 0 - чтобы выйти." << std::endl;
			break;
		}
	}
	delete bonny[0];
	delete bonny[1];
	delete bonny[2];
	delete bonny[3];
	delete bonny[4];

	return 0;
}
