/**
 * @file Interface.h
 * @brief Contains declaration for the Interface class
 * @authors Aidan Chapman (u22738917)
*/

#include "Customer.h"
#include "Restaurant.h"

using namespace std;

#ifndef INTERFACE_H
#define INTERFACE_H

class Interface{
    public:
        Interface();
        ~Interface();
        Customer* createCustomer();
        

    private:
        Restaurant* r;
};

#endif