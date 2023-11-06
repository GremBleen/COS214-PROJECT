/**
 * @file ItemBuilder.h
 * @brief Contains declaration for the ItemBuilder class
 * 
 * Superclass for all ItemBuilders, which are used to build Items   
 * 
 * @authors 
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "Item.h"

#ifndef ITEMBUILDER_H
#define ITEMBUILDER_H

class ItemBuilder
{
    public:
        virtual void prepareIngredients() = 0;
        virtual void assembleItem() = 0;
        virtual Item* getItem() = 0;

    protected:
        Item* item; ///< Item object
};

#endif