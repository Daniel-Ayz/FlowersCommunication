#pragma once
#include "Person.h"

class Worker : public Person
{
protected:
	std::string role;
	Worker(std::string, std::string);
public:
	std::string getName() override;
};

