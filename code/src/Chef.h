/**
 * @file Chef.h
 * @brief Contains declaration for the Chef class
 * @authors Aidan Chapman (u22738917)
*/

#include "ItemBuilder.h"
#include "Order.h"

#include <string>

using namespace std;

#ifndef CHEF_H
#define CHEF_H

class Chef
{
    public:
        Chef();
        virtual ~Chef();
        virtual Order* preparePart(string order) = 0;
        int request(string order);
        Chef* nextChef;
    protected:
        ItemBuilder* builders[8];
};
#endif