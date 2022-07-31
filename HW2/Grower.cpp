#include "Grower.h"

Grower::Grower(std::string name, Gardener* g) : Worker("Grower",name), gardener(g)
{
}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> flowers)
{
	std::cout << getName() << " forwards the request to " << gardener->getName() << "." << std::endl;
	FlowersBouquet* fb = gardener->prepareBouquet(flowers);
	std::cout << gardener->getName() << " returns flowers to " << getName() << "." << std::endl;
	return fb;
}
