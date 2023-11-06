/**
 * @file SideChef.h
 * @brief Contains declaration for the SideChef class
 * 
 * SideChef is a concrete class which inherits from Chef.
 * It is responsible for preparing the side part of the order.
 * 
 * @authors Aidan Chapman (u22738917)
*/

#include "Chef.h"

using namespace std;

#ifndef SIDECHEF_H
#define SIDECHEF_H

class SideChef : public Chef
{
    public:
        SideChef();
        ~SideChef();
        void preparePart(string order, Order* o);
};

#endif