#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string> bouquet) : bouquet(bouquet),is_arranged(false)
{
}

void FlowersBouquet::arrange()
{
	is_arranged = true;
}

std::string FlowersBouquet::getBouquet()
{
	std::string concatenate;
	for (std::vector<std::string>::iterator t = bouquet.begin(); t != bouquet.end(); ++t)
		concatenate += ", " + *t;
	concatenate = concatenate.substr(2);
	return concatenate;
}
