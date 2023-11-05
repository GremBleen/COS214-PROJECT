/**
 * @file ComplexOrder.h
 * @brief Contains declaration for the ComplexOrder class
 * @authors Aidan Chapman (u22738917), Sange Tshakumane (u21479748)
*/

#include "Order.h"
#include <list>


using namespace std;

#ifndef COMPLEXORDER_H
#define COMPLEXORDER_H

class ComplexOrder : public Order
{
    public:
        ComplexOrder();
        ~ComplexOrder();
        //float getPrice();
        void addToOrder(Order* item);
        void appendToOrder(Order* orderItem);
        float calculatePrice();
    private:
        //Order* item;
        //Order* nextOrderItem;
        list<Order*> items;
};

#endif