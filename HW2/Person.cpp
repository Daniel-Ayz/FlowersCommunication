#include "Person.h"
#include "Florist.h"

Person::Person(std::string name) : name(name)
{
}

void Person::orderFlowers(Florist* f, Person* p, std::vector<std::string> flowers)
{
	std::string concatenate;
	for (std::vector<std::string>::iterator t = flowers.begin(); t != flowers.end(); ++t)
		concatenate += ", " + *t;
	concatenate = concatenate.substr(2);
	std::cout << this->name << " orders flowers to " << p->getName() << " from " << f->getName() << ": " << concatenate<< "." << std::endl;
	f->acceptOrder(p,flowers);
}

std::string Person::getName()
{
	return name;
}

void Person::acceptFlowers(FlowersBouquet* bouquet)
{
	std::cout << name << " accepts the flowers: " << bouquet->getBouquet() << "." << std::endl;

}
