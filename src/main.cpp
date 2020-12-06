#include <vector>
#include <iostream>

#include "SDL2/SDL.h"

#include "../header/Planet.hpp"
#include "../header/RandomGenerator.hpp"

void displayPlanets(const std::vector<Planet> &planets)
{
    for (const Planet &planet : planets)
        std::cout << planet.getSize() << " " << planet.getTemperature() << std::endl;
}

void generatePlanets(const size_t nbr, std::vector<Planet> &planets)
{
    RandomGenerator rg;

    for (size_t index = 0; index < nbr; index++) {
        planets.push_back(
            Planet(
                rg.generateRandomNumber(1, 10),
                (rg.generateRandomNumber(-400, 400) + (5 * rg.generateRandomNumber(-20, 20))) / 6
            )
        );
    }
}

int main(void)
{
    std::vector<Planet> planets;

    generatePlanets(100, planets);
    displayPlanets(planets);
    return 0;
}
