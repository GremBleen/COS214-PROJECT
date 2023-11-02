/**
 * @file BurgerBuilder.h
 * @brief Contains declaration for the BurgerBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "MainBuilder.h"

using namespace std;

#ifndef BURGERBUILDER_H
#define BURGERBUILDER_H

class BurgerBuilder
{
    public:
        BurgerBuilder();
        ~BurgerBuilder();
        void butterBun();
        void prepareVegetables();
        void cookPatty();
        void applySauce();
        void prepareIngredients();
        void assembleItem();
        Item* getItem();

};

#endif