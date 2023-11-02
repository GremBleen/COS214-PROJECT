/**
 * @file Order.h
 * @brief Contains declaration for the Order class
 * @authors Aidan Chapman (u22738917)
*/

#include "Item.h"
#include "Waiter.h"

using namespace std;

#ifndef ORDER_H
#define ORDER_H

class Order{
    public:
        Order();
        ~Order();
        void addToOrder(Item* item);
        float calculatePrice();
        Waiter* getWaiter();
    private:
        Waiter* waiter;
};

#endif