#include "Customer.h"
#include "Restaurant.h"

using namespace std;

#ifndef INTERFACE_H
#define INTERFACE_H

class Interface
{
public:
    Interface();
    ~Interface();
    Customer *createCustomer();
};

#endif