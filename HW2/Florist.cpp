#include "Florist.h"

Florist::Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flower_arranger, DeliveryPerson* delivery_person)
: Worker("Florist", name), wholesaler(wholesaler), flowerArranger(flower_arranger), deliveryPerson(delivery_person) //flowerArranger(flowerArranger) , .... 
{
}

void Florist::acceptOrder(Person* p, std::vector<std::string> flowers)
{
	std::cout << this->getName() << " forwards request to "
	<< wholesaler->getName() << "." << std::endl;
	FlowersBouquet* fb=wholesaler->acceptOrder(flowers);
	std::cout << wholesaler->getName() << " returns flowers to " << getName() <<"." << std::endl;
	std::cout << getName() << " request flowers arrangement from "<< flowerArranger->getName() << "." << std::endl;
	flowerArranger->arrangeFlowers(fb);
	std::cout << flowerArranger->getName() << " returns arranged flowers to " << getName() << "." << std::endl;
	std::cout << getName() << " forwards flowers to " << deliveryPerson->getName() << "." << std::endl;
	deliveryPerson->deliver(p, fb);
}
