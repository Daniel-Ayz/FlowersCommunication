#pragma once
#include <iostream>
#include <vector>
class FlowersBouquet
{
private:
	std::vector<std::string> bouquet;
	bool is_arranged;
public:
	FlowersBouquet(std::vector<std::string>);
	void arrange();
	std::string getBouquet();
};

