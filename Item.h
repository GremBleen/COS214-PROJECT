/**
 * @file Item.h
 * @brief Contains declaration for the Item class
 * @authors Aidan Chapman (u22738917), Sange Tshakumane (u21479748)
*/

using namespace std;

#ifndef ITEM_H
#define ITEM_H

class Item: public Order
{
    public:
        Item();
        virtual ~Item();
        float calculatePrice();
    protected:
        float price;
};

#endif