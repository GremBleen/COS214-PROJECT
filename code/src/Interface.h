/**
 * @file Interface.h
 * @brief Contains declaration for the Interface class
 * @authors Aidan Chapman (u22738917)
*/

#include "Customer.h"
#include "Restaurant.h"
#include <string>
#include "OrderContainer.h"

#ifndef INTERFACE_H
#define INTERFACE_H

class Interface{
    public:
        Interface();
        ~Interface();
        int generateNumberOfCustomers();
        float runCustomer();
        static int getCurrentUnixTime();
        static string generateOrderString();
    private:
        Customer* createCustomer();
        Restaurant* createRestaurant();
        Restaurant* r;
};

#endif