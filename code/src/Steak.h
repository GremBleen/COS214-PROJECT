/**
 * @file Steak.h
 * @brief Contains declaration for the Steak class
 * @authors Aidan Chapman (u22738917)
*/

#include "MainMeal.h"

#ifndef STEAK_H
#define STEAK_H

class Steak : public MainMeal
{
    public:
        Steak();
        ~Steak();

        bool tenderisedSteak = false;
        bool seasonedSteak = false;
        bool cookedSteak = false;
        bool platedSteak = false;
};

#endif