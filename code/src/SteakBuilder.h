/**
 * @file SteakBuilder.h
 * @brief Contains declaration for the SteakBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "MainBuilder.h"

using namespace std;

#ifndef STEAKBUILDER_H
#define STEAKBUILDER_H

class SteakBuilder : public MainBuilder
{
    public:
        SteakBuilder();
        ~SteakBuilder();
        void prepareIngredients();
        void assembleItem();
        Item* getItem();

        // Operations used in template method
        void prepareMeat();
        void seasonMeat();
        void cookMeat();
        void plateMain();

        void tenderiseSteak();
        void seasonSteak();
        void cookSteak();
};

#endif