
/**
 * @file ChipsBuilder.cpp
 * @brief Implementation of the ChipsBuilder class.
 * 
 * This file contains the implementation of the ChipsBuilder class, which is responsible for building chips as a side dish.
 * The class defines methods for washing, chopping, assembling, and plating the side dish, as well as for washing, cutting, frying, and seasoning the potatoes.
 * 
 * @author 
 * - Graeme Blain (u22625462)
 */

#include "ChipsBuilder.h"
#include <unistd.h>
#include <cstdlib>
#include <iostream>

/**
 * @fn ChipsBuilder::ChipsBuilder()
 * @brief Construct a new Chips Builder:: Chips Builder object
 * 
 */
ChipsBuilder::ChipsBuilder() {
    //ctor
}

/**
 * @fn ChipsBuilder::~ChipsBuilder()
 * @brief Destroy the Chips Builder:: Chips Builder object
 * 
 */
ChipsBuilder::~ChipsBuilder() {
    //dtor
}

/**
 * @fn void ChipsBuilder::washVegetables()
 * @brief Washes the vegetables for the chips
 * 
 */
void ChipsBuilder::washVegetables() {
    cout << "Chips order" << endl;
    this->chips = new Chips();
    this->side = chips;

    washPotato();
    side->washedVegetables = true;
}

/**
 * @fn void ChipsBuilder::chopVegetables()
 * @brief Chops the vegetables for the chips
 * 
 */
void ChipsBuilder::chopVegetables() {
    cutPotato();
    side->cutVegetables = true;
}

/**
 * @fn void ChipsBuilder::assembleSide()
 * @brief Assembles the side dish
 * 
 */
void ChipsBuilder::assembleSide() {
    fryPotato();
    seasonChips();
    side->assembledSide = true;
}

/**
 * @fn void ChipsBuilder::plateSide()
 * @brief Plates the side dish
 * 
 */
void ChipsBuilder::plateSide() {
    side->platedSide = true;
    item = side;
    cout << "Chips Ready" << endl;
}

/**
 * @fn void ChipsBuilder::washPotato()
 * @brief Washes the potatoes for the chips
 * 
 */
void ChipsBuilder::washPotato() {
    cout << "\tWashing the potatoes..." << endl;
    chips->washedPotatoes = true;
    sleep(1);
}

/**
 * @fn void ChipsBuilder::cutPotato()
 * @brief Cuts the potatoes for the chips
 * 
 */
void ChipsBuilder::cutPotato() {
    cout << "\tCutting the potatoes..."<<endl;
    chips->cutPotatoes = true;
    sleep(2);
}

/**
 * @fn void ChipsBuilder::fryPotato()
 * @brief Fries the potatoes for the chips
 * 
 */
void ChipsBuilder::fryPotato() {
    cout <<"\tFrying the potatoes..."<<endl;
    chips->friedPotatoes = true;
    sleep(3);
}

/**
 * @fn void ChipsBuilder::seasonChips()
 * @brief Seasons the chips
 * 
 */
void ChipsBuilder::seasonChips() {
    cout << "\tSeasoning the chips..."<<endl;
    chips->seasonedChips = true;
    sleep(1);
}
