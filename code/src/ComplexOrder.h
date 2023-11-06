/**
 * @file ComplexOrder.h
 * @brief Contains declaration for the ComplexOrder class
 * 
 * ComplexOrder is a concrete class which inherits from Order. It is a composite in the composite pattern.
 * It is responsible for storing a list of orders and calculating the total price of the order.
 * 
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
