/**
 * @file Side.h
 * @brief Contains declaration for the Side class
 * 
 * @authors 
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "Item.h"

#ifndef SIDE_H
#define SIDE_H

class Side : public Item
{
    public:
        Side(float price);
        ~Side();

        bool washedVegetables = false; ///< Whether the vegetables have been washed
        bool cutVegetables = false; ///< Whether the vegetables have been cut
        bool assembledSide = false; ///< Whether the side has been assembled
        bool platedSide = false; ///< Whether the side has been plated
};

#endif