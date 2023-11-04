/**
 * @file Waiter.h
 * @brief Contains declaration for the Waiter class
 * @authors Aidan Chapman (u22738917)
*/

#include "Restaurant.h"
#include <string>

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
        void takeOrder(string order);
        void serveCustomer(Order* order);
        Customer* getCustomer();
        void cleanUp();
    private:
        Restaurant* restaurant;
        Customer* customer;
};


#endif