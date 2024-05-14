#ifndef WORLD_H
#define WORLD_H

#define WORLDSIZE 30

#include "Organism.h"

class World
{
public:
    World();
    ~World();
    Organism *getAt(int x, int y);
    void setAt(int x, int y, Organism *org);
    void Display();
    void SimulateOneStep();

private:
    Organism *grid[WORLDSIZE][WORLDSIZE];
};

#endif // WORLD_H
