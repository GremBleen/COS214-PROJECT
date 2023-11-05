/**
 * @file Waiter.h
 * @brief Contains declaration for the Waiter class
 * @authors Aidan Chapman (u22738917)
*/

#include "Restaurant.h"
#include <string>


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
        Restaurant* restaurant;
        Customer* customer;
};


#endif