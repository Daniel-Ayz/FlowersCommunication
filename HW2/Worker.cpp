#include "Worker.h"

std::string Worker::getName()
{
    return role+ " " + Person::getName();
}

Worker::Worker(std::string role, std::string name) : Person(name), role(role)
{
}
