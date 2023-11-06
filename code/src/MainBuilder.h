/**
 * @file MainBuilder.h
 * @brief Contains declaration for the MainBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "ItemBuilder.h"
#include "MainMeal.h"

#ifndef MAINBUILDER_H
#define MAINBUILDER_H

class MainBuilder : public ItemBuilder
{
    public:
        virtual void prepareIngredients();
        virtual void assembleItem();
        virtual Item* getItem();

        virtual void prepareMeat() = 0;
        virtual void seasonMeat() = 0;
        virtual void cookMeat() = 0;
        virtual void plateMain() = 0;

    protected:
        MainMeal* main;
};

#endif