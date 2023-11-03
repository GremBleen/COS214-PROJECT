/**
 * @file BeerBuilder.h
 * @brief Contains declaration for the BeerBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "DrinkBuilder.h"

using namespace std;

#ifndef BEERBUILDER_H
#define BEERBUILDER_H

class BeerBuilder : public DrinkBuilder
{
    public:
        BeerBuilder();
        ~BeerBuilder();
        void getGlass();
        void pourDrink();
        void prepareIngredients();
        void assembleItem();
        Item* getItem();

};

#endif