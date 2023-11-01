/**
 * @file Item.h
 * @brief Contains declaration for the Item class
 * @authors Aidan Chapman (u22738917)
*/

using namespace std;

#ifndef ITEM_H
#define ITEM_H

class Item
{
    public:
        Item();
        virtual ~Item();
        float getPrice();
    protected:
        float price;
};

#endif