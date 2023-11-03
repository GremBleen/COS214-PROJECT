#include "SideBuilder.h"

void SideBuilder::prepareIngredients() {
    washVegetables();
    chopVegetables();
}

void SideBuilder::assembleItem() {    
    assembleSide();
    plateSide();
}

Item* SideBuilder::getItem() {
    return item;
}