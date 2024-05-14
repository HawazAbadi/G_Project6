#include "World.h"

World::World()
{
    // Initialize grid with nullptrs
    for (int x = 0; x < WORLDSIZE; ++x)
    {
        for (int y = 0; y < WORLDSIZE; ++y)
        {
            grid[x][y] = nullptr;
        }
    }
}

World::~World()
{
    // Clean up grid
    for (int x = 0; x < WORLDSIZE; ++x)
    {
        for (int y = 0; y < WORLDSIZE; ++y)
        {
            delete grid[x][y];
        }
    }
}

Organism *World::getAt(int x, int y)
{
    return grid[x][y];
}

void World::setAt(int x, int y, Organism *org)
{
    grid[x][y] = org;
}

void World::Display()
{
    // Implement display logic
}

void World::SimulateOneStep()
{
    // Implement simulation logic
}
