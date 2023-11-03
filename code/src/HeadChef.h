/**
 * @file HeadChef.h
 * @brief Contains declaration for the HeadChef class
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