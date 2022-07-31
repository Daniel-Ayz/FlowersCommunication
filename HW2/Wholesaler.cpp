#include "Wholesaler.h"


Wholesaler::Wholesaler(std::string name, Grower* g) : Worker("Wholesaler",name), grower(g)
{
}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> flowers)
{
    std::cout << getName() << " forwards the request to " << grower->getName() << "." << std::endl;
    FlowersBouquet* fb=grower->prepareOrder(flowers);
    std::cout << grower->getName() << " returns flowers to " << getName() << "." << std::endl;
    return fb;
}
