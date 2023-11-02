#include "Order.h"

using namespace std;

#ifndef COMPLEXORDER_H
#define COMPLEXORDER_H

class ComplexOrder : public Order
{
    public:
        ComplexOrder();
        ~ComplexOrder();
        float getPrice();
    private:
        Order* item;
        Order* nextOrderItem;
};

#endif