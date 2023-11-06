/**
 * @file SideBuilder.h
 * @brief Contains declaration for the SideBuilder class
 * 
 * SideBuilder is an abstract class that inherits from ItemBuilder. It is used to build Side objects.
 * It contains functions to prepare ingredients, assemble the item, and get the item.
 * 
 * @authors
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "ItemBuilder.h"
#include "Side.h"

#ifndef SIDEBUILDER_H
#define SIDEBUILDER_H

class SideBuilder : public ItemBuilder
{
    public:
        virtual void prepareIngredients();
        virtual void assembleItem();
        virtual Item* getItem();

        virtual void washVegetables() = 0;
        virtual void chopVegetables() = 0;
        virtual void assembleSide() = 0;
        virtual void plateSide() = 0;

    protected:
        Side* side; ///< Side object
};

#endif