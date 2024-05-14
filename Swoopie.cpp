#include "Swoopie.h"
#include "World.h"

Swoopie::Swoopie() {}

Swoopie::Swoopie(World *world, int x, int y) : Organism(world, x, y) {}

Swoopie::~Swoopie() {}

void Swoopie::breed()
{
    // Implement breed logic for Swoopie
}

void Swoopie::move()
{
    // Implement move logic for Swoopie
}

int Swoopie::getType()
{
    return 2; // Assuming 2 represents Swoopie
}

bool Swoopie::starve()
{
    // Implement starve logic for Swoopie
    return false;
}
