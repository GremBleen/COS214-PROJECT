/**
 * @file Fish.h
 * @brief Contains declaration for the Fish class
 * @authors Aidan Chapman (u22738917)
*/

#include "MainMeal.h"

#ifndef FISH_H
#define FISH_H

class Fish : public MainMeal
{
    public:
        Fish();
        ~Fish();

        bool descaledFish = false;
        bool seasonedFish = false;
        bool cookedFish = false;
        bool platedFish = false;
};

#endif