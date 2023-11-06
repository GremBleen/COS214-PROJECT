/**
 * @file DrinkBuilder.h
 * @brief Contains declaration for the DrinkBuilder class
 * @authors 
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "ItemBuilder.h"
#include "Drink.h"

#ifndef DRINKBUILDER_H
#define DRINKBUILDER_H

class DrinkBuilder : public ItemBuilder {
public:
    virtual void prepareIngredients();
    virtual void assembleItem();
    virtual Item* getItem();

    virtual void getGlass() = 0;
    virtual void pourDrink() = 0;
    virtual void assembleDrink() = 0;

protected:
    Drink* drink; ///< The drink that is being built
};

#endif