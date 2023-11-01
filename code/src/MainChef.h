/**
 * @file MainChef.h
 * @brief Contains declaration for the MainChef class
 * @authors Aidan Chapman (u22738917)
*/

#include "Chef.h"

using namespace std;

#ifndef MAINCHEF_H
#define MAINCHEF_H

class MainChef : public Chef
{
    public:
        MainChef();
        ~MainChef();
        Order* preparePart(string order);
};

#endif