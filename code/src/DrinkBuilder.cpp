#include "DrinkBuilder.h"

void DrinkBuilder::prepareIngredients() {
    getGlass();
}

void DrinkBuilder::assembleItem() {
    pourDrink();
    assembleDrink();
}

Item* DrinkBuilder::getItem() {
    return item;
}