
/**
 * @file ChipsBuilder.cpp
 * @brief Implementation of the ChipsBuilder class.
 * 
 * This file contains the implementation of the ChipsBuilder class, which is responsible for building chips as a side dish.
 * The class defines methods for washing, chopping, assembling, and plating the side dish, as well as for washing, cutting, frying, and seasoning the potatoes.
 * @author 
 * - Graeme Blain (u22625462)
 */
#include "ChipsBuilder.h"

/**
 * @brief Construct a new Chips Builder:: Chips Builder object
 * 
 */
ChipsBuilder::ChipsBuilder() {
    //ctor
}

/**
 * @brief Destroy the Chips Builder:: Chips Builder object
 * 
 */
ChipsBuilder::~ChipsBuilder() {
    //dtor
}

/**
 * @brief Washes the vegetables for the chips
 * 
 */
void ChipsBuilder::washVegetables() {
    this->chips = new Chips();
    this->side = chips;

    washPotato();
    side->washedVegetables = true;
}

/**
 * @brief Chops the vegetables for the chips
 * 
 */
void ChipsBuilder::chopVegetables() {
    cutPotato();
    side->cutVegetables = true;
}

/**
 * @brief Assembles the side dish
 * 
 */
void ChipsBuilder::assembleSide() {
    fryPotato();
    seasonChips();
    side->assembledSide = true;
}

/**
 * @brief Plates the side dish
 * 
 */
void ChipsBuilder::plateSide() {
    side->platedSide = true;
    item = side;
}

/**
 * @brief Washes the potatoes for the chips
 * 
 */
void ChipsBuilder::washPotato() {
    chips->washedPotatoes = true;
}

/**
 * @brief Cuts the potatoes for the chips
 * 
 */
void ChipsBuilder::cutPotato() {
    chips->cutPotatoes = true;
}

/**
 * @brief Fries the potatoes for the chips
 * 
 */
void ChipsBuilder::fryPotato() {
    chips->friedPotatoes = true;
}

/**
 * @brief Seasons the chips
 * 
 */
void ChipsBuilder::seasonChips() {
    chips->seasonedChips = true;
}
