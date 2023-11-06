#include "Order.h"

using namespace std;

#ifndef COMPLEXORDER_H
#define COMPLEXORDER_H

class ComplexOrder : public Order
{
    public:
        ComplexOrder(Waiter* waiter);
        ~ComplexOrder();
        void addToOrder(Order* item);
        void appendToOrder(Order* order);
        float calculatePrice();
    private:
        Order* item;
        Order* nextOrderItem;
};

#endif