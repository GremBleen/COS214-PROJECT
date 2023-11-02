/**
 * @file Kitchen.h
 * @brief Contains declaration for the Kitchen class
 * @authors Aidan Chapman (u22738917)
*/

#include "Chef.h"
#include "Order.h"

#include <string>
#include <vector>

using namespace std;

#ifndef KITCHEN_H
#define KITCHEN_H

class Restaurant;

class Kitchen
{
    public:
        Kitchen();
        ~Kitchen();
        void receiveOrder(string order);
        Order* makeNextOrder();

    private:
        Restaurant* restaurant;
        Chef* chef;
        vector<string> orderQueue;
        vector<Customer*> customerQueue;
};

#endif