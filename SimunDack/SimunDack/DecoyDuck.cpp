#include "DecoyDuck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"

DecoyDuck::DecoyDuck()
{
	flyBehavior = new FlyNoWay();
	quackBehavior = new MuteQuack();
}

void DecoyDuck::display()
{
	cout << "Derevyannay utka" << endl;
}
