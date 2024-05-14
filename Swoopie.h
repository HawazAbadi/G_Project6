#ifndef SWOOPIE_H
#define SWOOPIE_H

#include "Organism.h"

class Swoopie : public Organism
{
public:
    Swoopie();
    Swoopie(World *world, int x, int y);
    ~Swoopie();
    void breed();
    void move();
    int getType();
    bool starve();
};

#endif // SWOOPIE_H
