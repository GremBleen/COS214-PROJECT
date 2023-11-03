/**
 * @file DrinkBuilder.h
 * @brief Contains declaration for the DrinkBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "ItemBuilder.h"

using namespace std;

#ifndef DRINKBUILDER_H
#define DRINKBUILDER_H

class DrinkBuilder : public ItemBuilder
{
    public:
        DrinkBuilder();
        virtual ~DrinkBuilder();
        virtual void prepareIngredients() = 0;
        virtual void assembleItem() = 0;
        virtual void getGlass() = 0;
        virtual void pourDrink() = 0;
        virtual Item* getItem() = 0;
};

#endif