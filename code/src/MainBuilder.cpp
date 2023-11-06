/**
 * @file MainBuilder.cpp
 * @brief Contains the implementation for the MainBuilder class
 * @authors Douglas Porter (u21797545)
*/

#include "MainBuilder.h"

/**
 * @fn MainBuilder::MainBuilder()
 * @brief Prepares the ingredients for the main dish
 * 
 */
void MainBuilder::prepareIngredients()
{
    prepareMeat();
    seasonMeat();
}

/**
 * @fn MainBuilder::assembleItem()
 * @brief Assembles the main dish
 * 
 */
void MainBuilder::assembleItem()
{
    cookMeat();
    plateMain();
}

/**
 * @fn MainBuilder::getItem()
 * @brief Returns the item that was built
 * 
 * @return Item* Pointer to the item that was built
 */
Item* MainBuilder::getItem()
{
    return this->item;
}
