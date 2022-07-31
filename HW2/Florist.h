#pragma once
#include "DeliveryPerson.h"
#include "FlowerArranger.h"
#include "Person.h"
#include "Wholesaler.h"

class Florist : public Worker
{
private:
	Wholesaler* wholesaler;
	FlowerArranger* flowerArranger;
	DeliveryPerson* deliveryPerson;
public:
	Florist(std::string, Wholesaler*, FlowerArranger*, DeliveryPerson*);
	void acceptOrder(Person*, std::vector<std::string>);
};

