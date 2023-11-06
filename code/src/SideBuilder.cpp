
#include "SaladBuilder.h"

/**
 * @fn SideBuilder::prepareIngredients()
 * @brief Prepares the ingredients for the side dish by washing and chopping the vegetables.
 */
void SideBuilder::prepareIngredients() {
    washVegetables();
    chopVegetables();
}

/**
 * @fn SideBuilder::assembleItem() 
 * @brief Assembles the side dish by calling the assembleSide() and plateSide() functions.
 */
void SideBuilder::assembleItem() {    
    assembleSide();
    plateSide();
}

/**
 * @fn SideBuilder::getItem()
 * @brief Returns the item that was built by the SideBuilder.
 * 
 * @return Item* A pointer to the item that was built.
 */
Item* SideBuilder::getItem() {
    return item;
}