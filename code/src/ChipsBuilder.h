/**
 * @file ChipsBuilder.h
 * @brief Contains declaration for the ChipsBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "SideBuilder.h"

using namespace std;

#ifndef CHIPSBUILDER_H
#define CHIPSBUILDER_H

class ChipsBuilder : public SideBuilder
{
    public:
        ChipsBuilder();
        ~ChipsBuilder();
        void prepareIngredients();
        void assembleItem();
        Item* getItem();

        void washVegetables();
        void chopVegetables();
        void assembleSide();
        void plateSide();

        void washPotato();
        void cutPotato();
        void fryPotato();
        void seasonChips();
};

#endif