/**
 * @file WaterBuilder.h
 * @brief Contains declaration for the WaterBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "DrinkBuilder.h"

using namespace std;

#ifndef WATERBUILDER_H
#define WATERBUILDER_H

class WaterBuilder
{
    public:
        WaterBuilder();
        ~WaterBuilder();
        void getGlas();
        void pourDrink();
        void prepareIngredients();
        void assembleItem();
        Item* getItem();

};

#endif