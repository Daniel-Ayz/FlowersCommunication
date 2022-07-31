#pragma once
#include "FlowersBouquet.h"
#include "Worker.h"

class Gardener : public Worker
{
public:
	Gardener(std::string);
	FlowersBouquet* prepareBouquet(std::vector <std::string>);
};

