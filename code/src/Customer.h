/**
 * @file Customer.h
 * @brief Contains declaration for the Customer class
 * @authors Boikanyo Tshwale (u20785233)
*/

#include "Rating.h"
#include "Waiter.h"

using namespace std;

#ifndef CUSTOMER_H
#define CUSTOMER_H
using namespace std;
#include "Rating.h"
#include "Waiter.h"
#include "Table.h"
#include <string>

class Customer{// Assumtion one customer per table
        public:
        Customer(int timestamp);
        ~Customer();
        void acceptWaiter(Waiter* waiter);
        Order* getOrder();
        string getOrderRequest();
        void changeRating(Rating* rating);
        void receiveOrder(Order* order);
        float calculatePayment();
        void setTable(Table* table);//needed to set Table pointer
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