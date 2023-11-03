/**
 * @file MainBuilder.cpp
 * @brief Contains the implementation for the MainBuilder class
 * @authors Douglas Porter (u21797545)
*/

#include "MainBuilder.h"

void MainBuilder::prepareIngredients()
{
    prepareMeat();
    seasonMeat();
}

void MainBuilder::assembleItem()
{
    cookMeat();
    plateMain();
}

Item* MainBuilder::getItem()
{
    return this->item;
}
