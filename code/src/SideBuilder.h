/**
 * @file SideBuilder.h
 * @brief Contains declaration for the SideBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "ItemBuilder.h"
#include "Side.h"

using namespace std;

#ifndef SIDEBUILDER_H
#define SIDEBUILDER_H

class SideBuilder : public ItemBuilder
{
    public:
        SideBuilder();
        virtual ~SideBuilder();
        virtual void prepareIngredients();
        virtual void assembleItem();
        virtual Item* getItem();

        virtual void washVegetables() = 0;
        virtual void chopVegetables() = 0;
        virtual void assembleSide() = 0;
        virtual void plateSide() = 0;

    protected:
        Side* side;
};

#endif