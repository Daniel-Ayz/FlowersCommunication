#pragma once
#include "Worker.h"

class DeliveryPerson : public Worker
{
public:
	DeliveryPerson(std::string);
	void deliver(Person*, FlowersBouquet*);
};

