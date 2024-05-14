#include <iostream>
#include <cstdlib>
#include <ctime>
#include "World.h"
#include "Zoomie.h"
#include "Swoopie.h"

#define WORLDSIZE 30
#define NUM_ZOOMIES 100
#define NUM_SWOOPIES 5

int main()
{
    srand(static_cast<unsigned>(time(0)));

    World world;

    // Initialize the world with Zoomies and Swoopies
    for (int i = 0; i < NUM_ZOOMIES; ++i)
    {
        int x = rand() % WORLDSIZE;
        int y = rand() % WORLDSIZE;
        while (world.getAt(x, y) != nullptr)
        {
            x = rand() % WORLDSIZE;
            y = rand() % WORLDSIZE;
        }
        world.setAt(x, y, new Zoomie(&world, x, y));
    }

    for (int i = 0; i < NUM_SWOOPIES; ++i)
    {
        int x = rand() % WORLDSIZE;
        int y = rand() % WORLDSIZE;
        while (world.getAt(x, y) != nullptr)
        {
            x = rand() % WORLDSIZE;
            y = rand() % WORLDSIZE;
        }
        world.setAt(x, y, new Swoopie(&world, x, y));
    }

    // Simulation loop
    for (int i = 0; i < 50; ++i)
    {
        std::cout << "Time Step: " << i + 1 << std::endl;
        world.Display();
        std::cout << "Press Enter to continue..." << std::endl;
        std::cin.get();
        world.SimulateOneStep();
    }

    return 0;
}
