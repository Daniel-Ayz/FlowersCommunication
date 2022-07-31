#include "Gardener.h"

Gardener::Gardener(std::string name) : Worker("Gardener", name)
{
}

FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> flowers)
{
	std::cout << getName() << " prepares flowers." << std::endl;
	FlowersBouquet* fb = new FlowersBouquet(flowers);
	return fb;
}
