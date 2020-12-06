#include "../header/Planet.hpp"

Planet::Planet(size_t size, long temperature):
    _size(size), _temperature(temperature)
{
}

Planet::~Planet()
{
}

size_t Planet::getSize(void) const
{
    return _size;
}

long Planet::getTemperature(void) const
{
    return _temperature;
}
