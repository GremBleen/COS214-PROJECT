/**
 * @file Drink.h
 * @brief Contains declaration for the Drink class
* @authors 
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "Item.h"

#ifndef DRINK_H
#define DRINK_H

class Drink : public Item
{
    public:
        Drink(float price);
        ~Drink();

        bool gotGlass = false; ///< Whether the glass has been obtained
        bool pouredDrink = false; ///< Whether the drink has been poured
        bool assembledDrink = false; ///< Whether the drink has been assembled
};

#endif