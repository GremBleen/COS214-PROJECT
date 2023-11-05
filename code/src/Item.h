/**
 * @file Item.h
 * @brief Contains declaration for the Item class
 * @authors Aidan Chapman (u22738917)
*/

#ifndef ITEM_H
#define ITEM_H

class Item
{
    public:
        Item(float price);
        virtual ~Item();
        float calculatePrice();
    protected:
        float price;
};

#endif