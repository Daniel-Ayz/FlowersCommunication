#pragma once
#include <iostream>
#include <vector>

#include "FlowersBouquet.h"


class Florist;

class Person
{
protected:
	std::string name;
public:
	Person(std::string);
	void orderFlowers(Florist*, Person*, std::vector<std::string>);
	virtual std::string getName();
	void acceptFlowers(FlowersBouquet*);
};

