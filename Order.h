/**
 * @file Order.h
 * @brief Contains declaration for the Order class
 * @authors Aidan Chapman (u22738917), Sange Tshakumane (u21479748)
*/

#include "Item.h"
#include "Waiter.h"

using namespace std;

#ifndef ORDER_H
#define ORDER_H

class Order{
    public:
        Order(Waiter* waiter);
        ~Order();
        virtual void addToOrder(Order* item);
        virtual void appendToOrder(Order* orderItem);
        virtual float calculatePrice();
        Waiter* getWaiter();
    private:
        Waiter* waiter;
};

#endif