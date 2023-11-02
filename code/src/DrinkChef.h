/**
 * @file DrinkChef.h
 * @brief Contains declaration for the DrinkChef class
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
        Order* preparePart(string order);
};

#endif