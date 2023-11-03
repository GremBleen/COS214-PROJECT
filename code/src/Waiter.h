/**
 * @file Waiter.h
 * @brief Contains declaration for the Waiter class
 * @authors Aidan Chapman (u22738917)
*/

#include "Restaurant.h"

using namespace std;

#ifndef WAITER_H
#define WAITER_H

class Customer;
class Order;

class Waiter{
    public:
        Waiter(Restaurant* restaurant);
        ~Waiter();
        void visitCustomer(Customer* customer);
        void takeOrder();
        void serveCustomer(Order* order);
    private:
        Restaurant* restaurant;
        Customer* customer;
};


#endif