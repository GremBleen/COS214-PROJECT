/**
 * @file Fish.h
 * @brief Contains declaration for the Fish class
 * @authors 
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "MainMeal.h"

#ifndef FISH_H
#define FISH_H

class Fish : public MainMeal
{
    public:
        Fish();
        ~Fish();

        bool descaledFish = false; ///< Whether the fish has been descaled
        bool seasonedFish = false; ///< Whether the fish has been seasoned
        bool cookedFish = false; ///< Whether the fish has been cooked
        bool platedFish = false; ///< Whether the fish has been plated
};

#endif