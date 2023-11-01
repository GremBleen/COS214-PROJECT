/**
 * @file BeerBuilder.h
 * @brief Contains declaration for the BeerBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "DrinkBuilder.h"

using namespace std;

#ifndef BEERBUILDER_H
#define BEERBUILDER_H

class BeerBuilder
{
    public:
        BeerBuilder();
        ~BeerBuilder();
        void getGlas();
        void pourDrink();
        void prepareIngredients();
        void assembleItem();
        Item* getItem();

};

#endif