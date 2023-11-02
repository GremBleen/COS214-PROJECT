/**
 * @file MainBuilder.h
 * @brief Contains declaration for the MainBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "ItemBuilder.h"

using namespace std;

#ifndef MAINBUILDER_H
#define MAINBUILDER_H

class MainBuilder : public ItemBuilder
{
    public:
        MainBuilder();
        virtual ~MainBuilder();
        virtual void prepareIngredients() = 0;
        virtual void assembleItem() = 0;
        virtual Item* getItem() = 0;
};

#endif