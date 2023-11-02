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
        void prepareMeat();
        void cookSteak();
        void seasonSteak();
        void prepareIngredients();
        void assembleItem();
        Item* getItem();

};

#endif