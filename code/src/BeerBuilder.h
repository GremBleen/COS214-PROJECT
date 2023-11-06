/**
 * @file BeerBuilder.h
 * @brief Contains declaration for the BeerBuilder class
 * @author 
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "DrinkBuilder.h"
#include "Beer.h"

#ifndef BEERBUILDER_H
#define BEERBUILDER_H

class BeerBuilder : public DrinkBuilder
{
    public:
        BeerBuilder();
        ~BeerBuilder();

        void getGlass();
        void pourDrink();
        void assembleDrink();

        void getBeerGlass();
        void pourBeer();
        void assembleBeer();

    private:
        Beer* beer; ///< Beer object
};

#endif