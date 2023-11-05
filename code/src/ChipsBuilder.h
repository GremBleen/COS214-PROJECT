/**
 * @file ChipsBuilder.h
 * @brief Contains declaration for the ChipsBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "SideBuilder.h"
#include "Chips.h"

#ifndef CHIPSBUILDER_H
#define CHIPSBUILDER_H

class ChipsBuilder : public SideBuilder
{
    public:
        ChipsBuilder();
        ~ChipsBuilder();

        void washVegetables();
        void chopVegetables();
        void assembleSide();
        void plateSide();

        void washPotato();
        void cutPotato();
        void fryPotato();
        void seasonChips();

    private:
        Chips* chips;
};

#endif