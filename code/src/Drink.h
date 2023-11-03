/**
 * @file Drink.h
 * @brief Contains declaration for the Drink class
 * @authors Aidan Chapman (u22738917)
*/

#include "Item.h"

#ifndef DRINK_H
#define DRINK_H

class Drink : public Item
{
    public:
        Drink();
        virtual ~Drink();
};

#endif