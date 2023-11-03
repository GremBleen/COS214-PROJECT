/**
 * @file BurgerBuilder.h
 * @brief Contains declaration for the BurgerBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "MainBuilder.h"

using namespace std;

#ifndef BURGERBUILDER_H
#define BURGERBUILDER_H

class BurgerBuilder : public MainBuilder
{
    public:
        BurgerBuilder();
        ~BurgerBuilder();
        void prepareIngredients();
        void assembleItem();
        Item* getItem();

        // Operations used in template method
        void prepareMeat();
        void seasonMeat();
        void cookMeat();
        void plateMain();

        void butterBun();
        void prepareVegetables();
        void cookPatty();
        void applySauce();
        void assembleBurger();
};

#endif