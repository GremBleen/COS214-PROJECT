
/**
 * @file OrderContainer.h
 * @brief The OrderContainer class represents a container for an Order object and its corresponding requested order string.
 * 
 * The OrderContainer class is used to pass orders to the Chef class.
 * 
 * @authors
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
 * - Sange Tshakumane (u21479748)
 */
#include "Order.h"

#include <string>

using namespace std;

#ifndef ORDERCONTAINER_H
#define ORDERCONTAINER_H

class OrderContainer{
    public:
                OrderContainer(string o, Order* order);
        ~OrderContainer();
        Order* getOrder();
        string getRequestedOrder();

    private:
        Order* order; /**< Pointer to the Order object */
        string o; /**< The requested order string */
};

#endif
