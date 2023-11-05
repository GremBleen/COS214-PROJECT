/**
 * @file Waiter.h
 * @brief Contains declaration for the Waiter class
 * @authors Aidan Chapman (u22738917)
*/

using namespace std;
#include "Restaurant.h"
#include <string>
#ifndef WAITER_H
#define WAITER_H

class Customer;
class Order;
class Restaurant;
/*
 * @Participant: Observer
*/
class Waiter{
    public:
        Waiter();
        Waiter(Restaurant* restaurant)
        ~Waiter();
        //void visitCustomer(Customer* customer);
        //void seated();//update();
        void takeOrder(Customer* newCustomer);
        void serveCustomer(Order* order);
        Customer* getCustomer();
        Restaurant* getRestaurant();
        void cleanUp();
    private:
        Restaurant* restaurant;
        Customer* customer;
};


#endif