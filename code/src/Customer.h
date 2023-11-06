/**
 * @file Customer.h
 * @brief Contains declaration for the Customer class
 * 
 * Contains the declaration of the Customer class, which represents a customer
 * 
 * @authors
 * - Aidan Chapman (u22738917)
*/

#include "Rating.h"
#include "Waiter.h"
#include "Table.h"


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
        Waiter* waiter; ///< The waiter serving the customer
        Rating* satisfaction; ///< The customer's satisfaction rating
        Table* table; ///< The table the customer is seated at

        int timestamp; ///< The time the customer arrived at the restaurant
        Order* order; ///< The customer's order
};

#endif