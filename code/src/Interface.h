/**
 * @file Interface.h
 * @brief Contains declaration for the Interface class
 * @authors Aidan Chapman (u22738917)
*/

#include "Customer.h"
#include "Restaurant.h"
#include <string>

using namespace std;

#ifndef INTERFACE_H
#define INTERFACE_H

class Interface{
    public:
        Interface();
        ~Interface();
        int generateNumberOfCustomers();
        float runCustomer();
    private:
        Customer* createCustomer();
        Restaurant* createRestaurant();
        int getCurrentUnixTime();
        string generateOrderString();
        Restaurant* r;
};

#endif