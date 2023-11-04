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
        Order* order;
        string o;
};

#endif