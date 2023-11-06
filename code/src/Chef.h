/**
 * @file Chef.h
 * @brief Contains declaration for the Chef class
 *
 * This file contains the declaration for the Chef class, which is responsible for preparing
 * different parts of an order using various ItemBuilder objects.
 *
 * @note This class is abstract and cannot be instantiated directly.
 *
 * @author Aidan Chapman
 */

#include "ItemBuilder.h"
#include "Order.h"

#include <string>

#ifndef CHEF_H
#define CHEF_H

class Chef {
public:
    Chef();
    virtual ~Chef();
    virtual void preparePart(string order, Order* o) = 0;
    int request(string& order);
    Chef* nextChef; ///< Pointer to next chef in chain of responsibility
    enum itemBuilders { steak, burger, fish, chips, salad, beer, water, soda }; ///< Enumerated type for item builders
protected:
    ItemBuilder* builders[8]; ///< Array of ItemBuilder pointers
};

#endif
