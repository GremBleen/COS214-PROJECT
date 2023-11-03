/**
 * @file ItemBuilder.h
 * @brief Contains declaration for the ItemBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "Item.h"

#ifndef ITEMBUILDER_H
#define ITEMBUILDER_H

class ItemBuilder
{
    public:
        ItemBuilder();
        virtual ~ItemBuilder();
        virtual void prepareIngredients() = 0;
        virtual void assembleItem() = 0;
        virtual Item* getItem() = 0;

    private:
        Item* item;
};

#endif