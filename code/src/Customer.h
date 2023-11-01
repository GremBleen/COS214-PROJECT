/**
 * @file Customer.h
 * @brief Contains declaration for the Customer class
 * @authors Aidan Chapman (u22738917)
*/

#include "Rating.h"
#include "Waiter.h"

using namespace std;

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer{
    public:
        Customer();
        ~Customer();
        void acceptWaiter(Waiter* waiter);
        void changeRating(Rating* rating);
        void receiveOrder(Order* order);
        float calculatePayment();
    
    private:
        Waiter* waiter;
        Rating* satisfaction;
};

#endif