#ifndef ZOOMIE_H
#define ZOOMIE_H

#include "Organism.h"

class Zoomie : public Organism
{
public:
    Zoomie();
    Zoomie(World *world, int x, int y);
    ~Zoomie();
    void breed();
    void move();
    int getType();
    bool starve();
};

#endif // ZOOMIE_H
