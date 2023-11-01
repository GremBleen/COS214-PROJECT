/**
 * @file SideChef.h
 * @brief Contains declaration for the SideChef class
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
        Order* preparePart(string order);
};

#endif