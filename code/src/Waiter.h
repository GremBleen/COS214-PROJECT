/**
 * @file Waiter.h
 * @brief Contains declaration for the Waiter class
 * 
 * The Waiter class is used to represent a waiter in the restaurant. It contains a pointer to a Customer object,
 * which is used to represent the customer that the waiter is serving.
 * 
 * @authors Aidan Chapman (u22738917)
*/

#include "Restaurant.h"

#ifndef WAITER_H
#define WAITER_H

class Customer;
class Order;
class OrderContainer;

class Waiter{
    public:
        Waiter(Restaurant* restaurant);
        ~Waiter();
        void visitCustomer(Customer* customer);
        void takeOrder(OrderContainer* orderContainer);
        void serveCustomer(Order* order);
        Customer* getCustomer();
        Restaurant* getRestaurant();
        void cleanUp();
    private:
        Restaurant* restaurant; ///< A pointer to the restaurant
        Customer* customer; ///< A pointer to the customer
};


#endif