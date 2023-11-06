/**
 * @file Steak.h
 * @brief Contains declaration for the Steak class
 * @authors 
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "MainMeal.h"

#ifndef STEAK_H
#define STEAK_H

class Steak : public MainMeal
{
    public:
        Steak();
        ~Steak();

        bool tenderisedSteak = false; ///< Whether the steak has been tenderised
        bool seasonedSteak = false; ///< Whether the steak has been seasoned
        bool cookedSteak = false; ///< Whether the steak has been cooked
        bool platedSteak = false; ///< Whether the steak has been plated
};

#endif