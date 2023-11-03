/**
 * @file SaladBuilder.h
 * @brief Contains declaration for the SaladBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "SideBuilder.h"

using namespace std;

#ifndef SALADBUILDER_H
#define SALADBUILDER_H

class SaladBuilder : public SideBuilder
{
    public:
        SaladBuilder();
        ~SaladBuilder();
        void prepareIngredients();
        void assembleItem();
        Item* getItem();

        void washVegetables();
        void chopVegetables();
        void plateSide();

        void washLettuce();
        void cutLettuce();
        void washTomato();
        void cutTomato();
        void washCucumber();
        void cutCucumber();
        void cutFeta();
        void assembleSalad();
};

#endif