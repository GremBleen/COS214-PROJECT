/**
 * @file Order.h
 * @brief Contains declaration for the Order class
 * 
 * This file contains the declaration for the Order class. Order is an abstract class that is used to represent an order.
 * 
 * @authors Aidan Chapman (u22738917)
*/

#include "Waiter.h"

#ifndef ORDER_H
#define ORDER_H

class Order{
    public:
        Order();
        Order(Waiter* waiter);
        virtual ~Order();
        virtual void addToOrder(Order* item);
        virtual void appendToOrder(Order* order);
        virtual float calculatePrice();
        Waiter* getWaiter();
    private:
        Waiter* waiter; ///< The waiter who took the order
};

#endif