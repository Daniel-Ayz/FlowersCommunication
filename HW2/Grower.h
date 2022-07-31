#pragma once
#include "FlowersBouquet.h"
#include "Gardener.h"
#include "Worker.h"

class Grower : public Worker
{
private:
	Gardener* gardener;
public:
	Grower(std::string, Gardener*);
	FlowersBouquet* prepareOrder(std::vector<std::string>);
};

