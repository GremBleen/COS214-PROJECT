/**
 * @file DrinkChef.h
 * @brief Contains declaration for the DrinkChef class
 * 
 * DrinkChef is a derived class of Chef, representing a chef that prepares drinks.
 * 
 * @authors Aidan Chapman (u22738917)
*/

#include "Chef.h"

using namespace std;

#ifndef DRINKCHEF_H
#define DRINKCHEF_H

class DrinkChef : public Chef
{
    public:
        DrinkChef();
        ~DrinkChef();
        void preparePart(string order, Order* o);
};

#endif