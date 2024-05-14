#include "Organism.h"
#include "World.h"

Organism::Organism() : x(0), y(0), moved(false), breedTicks(0), world(nullptr) {}

Organism::Organism(World *world, int x, int y) : x(x), y(y), moved(false), breedTicks(0), world(world) {}

Organism::~Organism() {}

