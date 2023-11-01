/**
 * @file ChipsBuilder.h
 * @brief Contains declaration for the ChipsBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "SideBuilder.h"

using namespace std;

#ifndef CHIPSBUILDER_H
#define CHIPSBUILDER_H

class ChipsBuilder
{
    public:
        ChipsBuilder();
        ~ChipsBuilder();
        void cutPotato();
        void fryPotato();
        void seasonChips();
        void prepareIngredients();
        void assembleItem();
        Item* getItem();

};

#endif