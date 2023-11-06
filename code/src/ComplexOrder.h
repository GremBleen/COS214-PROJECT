/**
 * @file ComplexOrder.h
 * @brief Contains declaration for the ComplexOrder class
 * @authors 
 * - Aidan Chapman (u22738917)
*/
#include "Order.h"

#ifndef COMPLEXORDER_H
#define COMPLEXORDER_H

class ComplexOrder : public Order {
public:
    ComplexOrder(Waiter* waiter);
    ~ComplexOrder();
    void addToOrder(Order* item);
    void appendToOrder(Order* order);
    float calculatePrice();

private:
    Order* item; ///< The first order item
    Order* nextOrderItem; ///< The next order item
};

#endif
