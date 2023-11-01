/**
 * @file Waiter.h
 * @brief Contains declaration for the Waiter class
 * @authors Aidan Chapman (u22738917)
*/

using namespace std;

#ifndef WAITER_H
#define WAITER_H

class Customer;

class Waiter{
    public:
        Waiter();
        ~Waiter();
        void visitCustomer(Customer* customer);
        void takeOrder();
        void serveCustomer(Order* order);
    private:
        Restaurant* restaurant;
        Customer* customer;
};


#endif