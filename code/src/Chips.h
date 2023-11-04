/**
 * @file Chips.h
 * @brief Contains declaration for the Chips class
 * @authors Aidan Chapman (u22738917)
*/

#include "Side.h"

#ifndef CHIPS_H
#define CHIPS_H

class Chips : public Side
{
    public:
        Chips();
        ~Chips();

        bool washedPotatoes = false;
        bool cutPotatoes = false;
        bool friedPotatoes = false;
        bool seasonedChips = false;
        
};

#endif