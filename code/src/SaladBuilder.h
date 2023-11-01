/**
 * @file SaladBuilder.h
 * @brief Contains declaration for the SaladBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "SideBuilder.h"

using namespace std;

#ifndef SALADBUILDER_H
#define SALADBUILDER_H

class SaladBuilder
{
    public:
        SaladBuilder();
        ~SaladBuilder();
        void prepareVegetables();
        void cutVegetables();
        void cutFeta();
        void prepareIngredients();
        void assembleItem();
        Item* getItem();

};

#endif