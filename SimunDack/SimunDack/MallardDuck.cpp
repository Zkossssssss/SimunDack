#include "MallardDuck.h"
#include "FlyWithWings.h"
MallardDuck::MallardDuck()
{
	flyBehavior = new FlyWithWings();
}

void MallardDuck::display()
{
	cout << "Mandarinovaya utka" << endl;
}
