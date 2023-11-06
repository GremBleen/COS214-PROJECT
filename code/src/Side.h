/**
 * @file Side.h
 * @brief Contains declaration for the Side class
 * @authors Aidan Chapman (u22738917)
*/

#include "Item.h"

#ifndef SIDE_H
#define SIDE_H

class Side : public Item
{
    public:
        Side(float price);
        ~Side();

        bool washedVegetables = false;
        bool cutVegetables = false;
        bool assembledSide = false;
        bool platedSide = false;
};

#endif