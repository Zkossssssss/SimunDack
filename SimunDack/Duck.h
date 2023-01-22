#pragma once
#include <iostream>
#include "FlyBehavior.h"
#include "QuackBehavior.h"
using namespace std;

class Duck
{
protected:
	QuackBehavior* quackBehavior = nullptr;
	FlyBehavior* flyBehavior;
public:
	void quack();
	void performQuack();
	void performFly();
	void swim();
	virtual void display() = 0;
};

