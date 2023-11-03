/**
 * @file SideBuilder.h
 * @brief Contains declaration for the SideBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "ItemBuilder.h"

using namespace std;

#ifndef SIDEBUILDER_H
#define MAINBUILDER_H

class SideBuilder : public ItemBuilder
{
    public:
        SideBuilder();
        virtual ~SideBuilder();
        virtual void prepareIngredients() = 0;
        virtual void assembleItem() = 0;
        virtual Item* getItem() = 0;
};

#endif