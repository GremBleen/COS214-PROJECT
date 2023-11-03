/**
 * @file SodaBuilder.h
 * @brief Contains delcaration for the SodaBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "DrinkBuilder.h"

using namespace std;

#ifndef SODABUILDER_H
#define SODABUILDER_H

class SodaBuilder : public DrinkBuilder
{
    public:
        SodaBuilder();
        ~SodaBuilder();
        void getGlass();
        void pourDrink();
        void prepareIngredients();
        void assembleItem();
        Item* getItem();
};

#endif