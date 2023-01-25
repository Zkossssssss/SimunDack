#include <iostream>
#include "Duck.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"
#include "DecoyDuck.h"

#include "FlyBehavior.h"
#include "FlyNoWay.h"
#include "FlyWithWings.h"




int main()
{
	Duck* mallard = new MallardDuck();
	mallard->display();
	mallard->quack();
	mallard->swim();
	mallard->performFly();

	Duck* Redhead = new RedheadDuck();
	Redhead->display();
	Redhead->quack();
	Redhead->swim();
	Redhead->performFly();

	Duck* Decoy = new DecoyDuck();
	Decoy->display();
	Decoy->performQuack();
	Decoy->swim();
	Decoy->performFly();

	Duck* Rubber = new RubberDuck();
	Rubber->display();
	Rubber->performQuack();
	Rubber->swim();
	Rubber->performFly();
	return 0;

}
