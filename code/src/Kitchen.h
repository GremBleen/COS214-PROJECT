/**
 * @file Kitchen.h
 * @brief Contains declaration for the Kitchen class
 * @authors Aidan Chapman (u22738917)
*/

#include "Chef.h"
#include "Order.h"
#include "Restaurant.h"

#include <string>
#include <vector>

using namespace std;

#ifndef KITCHEN_H
#define KITCHEN_H

class Kitchen
{
    public:
        Kitchen();
        ~Kitchen();
        void receiveOrder(string order);
        void makeNextOrder();
        void setRestaurant(Restaurant* restaurant);

    private:
        Restaurant* restaurant;
        Chef* chef;
        vector<string> orderQueue;
        vector<Customer*> customerQueue;
};

#endif