#include "RubberDuck.h"
#include "FlyNoWay.h"

RubberDuck::RubberDuck()
{
	flyBehavior = new FlyNoWay();
}

void RubberDuck::display()
{
	cout << "Rezinovaya Utka" << endl;
}