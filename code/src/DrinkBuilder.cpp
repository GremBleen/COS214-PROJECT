
/**
 * @file DrinkBuilder.cpp
 * @brief Implementation of the DrinkBuilder class.
 * 
 * This file contains the implementation of the DrinkBuilder class, which is responsible for building drinks.
 * It defines the functions to prepare the ingredients, assemble the drink, and return the built item.
 * @authors 
 * - Graeme Blain (u22625462)
 */
#include "DrinkBuilder.h"

/**
 * @fn DrinkBuilder::DrinkBuilder()
 * @brief Prepares the ingredients for the drink.
 * 
 */
void DrinkBuilder::prepareIngredients() {
    getGlass();
}

/**
 * @fn void DrinkBuilder::assembleItem()
 * @brief Assembles the drink by pouring and assembling it.
 * 
 */
void DrinkBuilder::assembleItem() {
    pourDrink();
    assembleDrink();
}

/**
 * @fn Item* DrinkBuilder::getItem()
 * @brief Returns the item that was built.
 * 
 * @return Item* Pointer to the item that was built.
 */
Item* DrinkBuilder::getItem() {
    return item;
}


