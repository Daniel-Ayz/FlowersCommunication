#include "DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string name) : Worker("Delivery Person", name)
{
}

void DeliveryPerson::deliver(Person* p, FlowersBouquet* b)
{
	std::cout << getName() << " delivers flowers " << p->getName() << "." << std::endl;
	p->acceptFlowers(b);
}
