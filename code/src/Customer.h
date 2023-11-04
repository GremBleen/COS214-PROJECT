/**
 * @file Customer.h
 * @brief Contains declaration for the Customer class
 * @authors Aidan Chapman (u22738917)
*/

#include "Rating.h"
#include "Waiter.h"
#include "Table.h"
#include <string>

using namespace std;

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer{
    public:
        Customer(int timestamp);
        ~Customer();
        void acceptWaiter(Waiter* waiter);
        Order* getOrder();
        string getOrderRequest();
        void changeRating(Rating* rating);
        void receiveOrder(Order* order);
        float calculatePayment();
        Table* getTable();
        Waiter* getWaiter();
        int getTimestamp();

private:
        Waiter* waiter;
        Rating* satisfaction;
        Table* table;

        int timestamp;
        Order* order;
};

#endif