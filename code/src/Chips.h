/**
 * @file Chips.h
 * @brief Contains declaration for the Chips class
 * @author
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "Side.h"

#ifndef CHIPS_H
#define CHIPS_H

class Chips : public Side {
public:
    Chips();
    ~Chips();

    bool washedPotatoes = false; ///< Whether the potatoes have been washed
    bool cutPotatoes = false; ///< Whether the potatoes have been cut
    bool friedPotatoes = false; ///< Whether the potatoes have been fried
    bool seasonedChips = false; ///< Whether the chips have been seasoned
};

#endif