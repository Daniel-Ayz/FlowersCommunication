#include <iostream>

#include "Florist.h"
#include "Person.h"
#include "Wholesaler.h"

int main(int argc, char** argv)
{
	std::cout << "Hello World" << std::endl;
	Person* chris = new Person("Chris");
	Person* robin = new Person("Robin");
	Gardener* garett = new Gardener("Garett");
	Grower* gray = new Grower("Gray", garett);
	DeliveryPerson* dylan = new DeliveryPerson("Dylan");
	FlowerArranger* flora = new FlowerArranger("Flora");
	Wholesaler* watson = new Wholesaler("Watson",gray);
	Florist* fred = new Florist("Fred",watson,flora,dylan);
	std::vector<std::string> flowers = { "Roses", "Violets", "Gladiolus" };
	chris->orderFlowers(fred, robin, flowers);

	delete chris;
	delete robin;
	delete garett;
	delete gray;
	delete dylan;
	delete flora;
	delete watson;
	delete fred;
}
