#include "Zoomie.h"
#include "World.h"

Zoomie::Zoomie() {}

Zoomie::Zoomie(World *world, int x, int y) : Organism(world, x, y) {}

Zoomie::~Zoomie() {}

void Zoomie::breed()
{
    // Implement breed logic for Zoomie
}

void Zoomie::move()
{
    // Implement move logic for Zoomie
}

int Zoomie::getType()
{
    return 1; // Assuming 1 represents Zoomie
}

bool Zoomie::starve()
{
    return false; // Zoomies do not starve
}
