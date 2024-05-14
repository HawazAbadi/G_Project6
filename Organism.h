#ifndef ORGANISM_H
#define ORGANISM_H

class World; 

class Organism
{
public:
    Organism();
    Organism(World *world, int x, int y);
    virtual ~Organism();
    virtual void breed() = 0;
    virtual void move() = 0;
    virtual int getType() = 0;
    virtual bool starve() = 0;

protected:
    int x, y;
    bool moved;
    int breedTicks;
    World *world;
};

#endif // ORGANISM_H
