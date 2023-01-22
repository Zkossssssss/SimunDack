#include "Duck.h"

void Duck::performFly()
{
	flyBehavior->fly();
}
void Duck::quack()
{
	cout << "Krya-krya" << endl;
}

void Duck::performQuack()
{
	quackBehavior->quack();
}

void Duck::swim()
{
	cout << "Bul-bul" << endl;
}
