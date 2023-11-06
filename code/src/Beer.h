/**
 * @file Beer.h
 * @brief Contains the declaration for the Beer class.
 * 
 * This file defines the Beer class, which is a subclass of the Drink class. 
 * It contains boolean variables to keep track of whether a beer glass has been obtained, 
 * whether beer has been poured into the glass, and whether the beer has been assembled.
 * 
 * @author 
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "Drink.h"

#ifndef BEER_H
#define BEER_H

class Beer : public Drink
{
    public:
        Beer();
        ~Beer();

        bool gotBeerGlass = false; ///< Whether a beer glass has been obtained
        bool pouredBeer = false; ///< Whether beer has been poured into the glass
        bool assembledBeer = false; ///< Whether the beer has been assembled
};

#endif
