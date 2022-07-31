#pragma once
#include "Person.h"
#include "Worker.h"
#include "FlowersBouquet.h"
#include "Grower.h"

class Wholesaler : public Worker
{
private:
	Grower* grower;
public:
	Wholesaler(std::string, Grower*);
	FlowersBouquet* acceptOrder(std::vector<std::string>);
};

