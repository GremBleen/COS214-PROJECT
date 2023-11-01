/**
 * @file Order.h
 * @brief Contains declaration for the Order class
 * @authors Aidan Chapman (u22738917)
*/

#include "Item.h"

using namespace std;

#ifndef ORDER_H
#define ORDER_H

class Order{
    public:
        Order();
        ~Order();
        void addToOrder(Item* item);
        float calculatePrice();
    private:
        Item* items; // Assuming this is a linked list of items in an order?
        Order* nextOrder;
};

#endif