/**
 * @file FishBuilder.h
 * @brief Contains declaration for the FishBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "MainBuilder.h"

using namespace std;

#ifndef FISHBUILDER_H
#define FISHBUILDER_H

class FishBuilder
{
    public:
        FishBuilder();
        ~FishBuilder();
        void descaleFish();
        void cookFish();
        void seasonFish();
        void prepareIngredients();
        void assembleItem();
        Item* getItem();

};

#endif