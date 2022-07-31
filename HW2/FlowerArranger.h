#pragma once
#include "FlowersBouquet.h"
#include "Worker.h"

class FlowerArranger : public Worker
{
public:
	FlowerArranger(std::string);
	void arrangeFlowers(FlowersBouquet*);
};

