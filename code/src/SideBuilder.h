/**
 * @file SideBuilder.h
 * @brief Contains declaration for the SideBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "ItemBuilder.h"

using namespace std;

#ifndef SIDEBUILDER_H
#define MAINBUILDER_H

class SideBuilder : public ItemBuilder
{
    public:
        SideBuilder();
        virtual ~SideBuilder();
        virtual void prepareIngredients();
        virtual void assembleItem();
        virtual Item* getItem();

        virtual void washVegetables();
        virtual void chopVegetables();
        virtual void plateSide();
};

#endif