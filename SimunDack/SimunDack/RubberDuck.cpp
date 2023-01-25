#include "RubberDuck.h"
#include "FlyNoWay.h"
#include "Squeak.h"


RubberDuck::RubberDuck()
{
	flyBehavior = new FlyNoWay();
	quackBehavior = new Squeak();
}

void RubberDuck::display()
{
	cout << "Rezinovaya Utka" << endl;
}