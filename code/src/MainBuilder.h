/**
 * @file MainBuilder.h
 * @brief Contains declaration for the MainBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "ItemBuilder.h"
#include "MainMeal.h"

using namespace std;

#ifndef MAINBUILDER_H
#define MAINBUILDER_H

class MainBuilder : public ItemBuilder
{
    public:
        MainBuilder();
        virtual ~MainBuilder();
        virtual void prepareIngredients();
        virtual void assembleItem();
        virtual Item* getItem();

        virtual void prepareMeat();
        virtual void seasonMeat();
        virtual void cookMeat();
        virtual void plateMain();

    protected:
        MainMeal* main;
};

#endif