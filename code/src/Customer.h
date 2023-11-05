/**
 * @file Customer.h
 * @brief Contains declaration for the Customer class
 * @authors Aidan Chapman (u22738917)
*/

#include "Rating.h"
#include "Waiter.h"
#include <string>


#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer{
    public:
        Customer(int timestamp);
        ~Customer();
        void acceptWaiter(Waiter* waiter);
        string getOrderRequest();
        void changeRating(Rating* rating);
        void receiveOrder(Order* order);
        float calculatePayment();
        Waiter* getWaiter();
    private:
        Waiter* waiter;
        Rating* satisfaction;
        int timestamp;
};

#endif