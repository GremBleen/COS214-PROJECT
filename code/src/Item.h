/**
 * @file Item.h
 * @brief Contains declaration for the Item class
 * @authors Aidan Chapman (u22738917)
*/

#include "Order.h"

#ifndef ITEM_H
#define ITEM_H

class Item : public Order
{
    public:
        Item(float price);
        ~Item();
        float calculatePrice();
    protected:
        float price;
};

#endif