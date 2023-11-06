/**
 * @file MainChef.h
 * @brief Contains declaration for the MainChef class
 * 
 * The MainChef class is a concrete class which inherits from the Chef class.
 * It represents a chef that prepares main meals.
 * 
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
        void preparePart(string order, Order* o);
};

#endif