/**
 * @file DrinkBuilder.h
 * @brief Contains declaration for the DrinkBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "ItemBuilder.h"
#include "Drink.h"

using namespace std;

#ifndef DRINKBUILDER_H
#define DRINKBUILDER_H

class DrinkBuilder : public ItemBuilder {
public:
    DrinkBuilder();
    virtual ~DrinkBuilder();
    virtual void prepareIngredients();
    virtual void assembleItem();
    virtual Item* getItem();

    virtual void getGlass() = 0;
    virtual void pourDrink() = 0;
    virtual void assembleDrink() = 0;

protected:
    Drink* drink;
};

#endif