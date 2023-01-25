#include "RedheadDuck.h"
#include "FlyWithWings.h"

RedheadDuck::RedheadDuck()
{
	flyBehavior = new FlyWithWings();
}

void RedheadDuck::display()
{
	cout << "Krasnogolovaya utka" << endl;
}
