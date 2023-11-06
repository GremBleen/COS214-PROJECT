/**
 * @file BeerBuilder.h
 * @brief Contains declaration for the BeerBuilder class
 *
 * This file defines the BeerBuilder class, which is a subclass of the DrinkBuilder class.
 * BeerBuilder is used to build a Beer object, and contains functions to get a beer glass,
 *
 * @author
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "DrinkBuilder.h"
#include "Beer.h"

#ifndef BEERBUILDER_H
#define BEERBUILDER_H

class BeerBuilder : public DrinkBuilder {
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