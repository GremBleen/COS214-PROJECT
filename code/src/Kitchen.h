/**
 * @file Kitchen.h
 * @brief Contains declaration for the Kitchen class
 * 
 * The Kitchen class is responsible for receiving orders from the Restaurant class and passing them to the Chef class.
 * Kitchen holds a vector of OrderContainer objects, which are used to pass orders to the Chef class.
 * Kitchen has a pointer to a Chef object, which is the chain of responsibility object.
 * 
 * @authors Aidan Chapman (u22738917)
*/

#include "Chef.h"

using namespace std;

#ifndef KITCHEN_H
#define KITCHEN_H

class OrderContainer;

class Kitchen
{
    public:
        Kitchen();
        ~Kitchen();
        void receiveOrder(OrderContainer* orderContainer);
        void makeNextOrder();
        void setRestaurant(Restaurant* restaurant);

    private:
        Restaurant* restaurant; ///< Restaurant object
        Chef* chef; ///< Chef object
        vector<OrderContainer*> orderQueue; ///< Vector of OrderContainer objects
};

#endif