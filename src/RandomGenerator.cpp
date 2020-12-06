#include "../header/RandomGenerator.hpp"

RandomGenerator::RandomGenerator()
{
    std::srand(std::time(NULL));
}

RandomGenerator::~RandomGenerator()
{
}

int RandomGenerator::generateRandomNumber(const int min, const int max) const
{
    return min + (std::rand() % (max - min));
}
