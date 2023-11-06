/**
 * @file HeadChef.h
 * @brief Contains declaration for the HeadChef class
 * 
 * HeadChef is a derived class of Chef, representing a chef that prepares finishes meals.
 * 
 * @authors Aidan Chapman (u22738917)
*/

#include "Chef.h"

using namespace std;

#ifndef HEADCHEF_H
#define HEADCHEF_H

class HeadChef : public Chef
{
    public:
        HeadChef();
        ~HeadChef();
        void preparePart(string order, Order* o);
};

#endif