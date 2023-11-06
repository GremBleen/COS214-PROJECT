/**
 * @file Chef.h
 * @brief Contains declaration for the Chef class
 * @authors Aidan Chapman (u22738917)
*/

#include "ItemBuilder.h"
#include "Order.h"

#include <string>

#ifndef CHEF_H
#define CHEF_H

class Chef
{
    public:
        Chef();
        virtual ~Chef();
        virtual void preparePart(string order, Order* o) = 0;
        int request(string& order);
        Chef* nextChef;
        enum itemBuilders{steak, burger, fish, chips, salad, beer, water, soda};
    protected:
        ItemBuilder* builders[8];
};
#endif