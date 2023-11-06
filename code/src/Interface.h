/**
 * @file Interface.h
 * @brief Contains declaration for the Interface class
 * 
 * Interface is a class that handles the user interface for the program.
 * Aggregates Restaurant and Customer objects and their functions.
 * 
 * @authors Aidan Chapman (u22738917)
 */

#include "Customer.h"
#include "Restaurant.h"
#include <string>
#include "OrderContainer.h"

#ifndef INTERFACE_H
#define INTERFACE_H

class Interface
{
public:
    Interface();
    ~Interface();
    int generateNumberOfCustomers();
    float runCustomer();
    static int getCurrentUnixTime();
    static string generateOrderString();
    Restaurant *getRestaurant();

private:
    Customer *createCustomer();
    Restaurant *createRestaurant();
    Restaurant *r; ///< Restaurant object
};

#endif