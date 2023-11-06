/**
 * @file SodaBuilder.cpp
 * @brief Contains implementation for the SodaBuilder class
 * 
 * @authors
 * - Graeme Blain (u22625462)
 */
#include "SodaBuilder.h"

/**
 * @fn SodaBuilder::SodaBuilder() 
 * @brief Construct a new Soda Builder:: Soda Builder object
 */
SodaBuilder::SodaBuilder() {
}

/**
 * @fn SodaBuilder::~SodaBuilder()
 * @brief Destroy the Soda Builder:: Soda Builder object
 */
SodaBuilder::~SodaBuilder() {
}

/**
 * @fn void SodaBuilder::getGlass()
 * @brief Get the Glass object
 */
void SodaBuilder::getGlass() {
    soda = new Soda();
    drink = soda;

    getSodaGlass();
    drink->gotGlass = true;
}

/**
 * @fn void SodaBuilder::pourDrink()
 * @brief Pour Drink object
 */
void SodaBuilder::pourDrink() {
    pourSoda();
    drink->pouredDrink = true;
}

/**
 * @fn void SodaBuilder::assembleDrink()
 * @brief Assemble Drink object
 */
void SodaBuilder::assembleDrink() {
    assembleSoda();
    drink->assembledDrink = true;

    item = drink;
}

/**
 * @fn void SodaBuilder::getSodaGlass()
 * @brief Get the Soda Glass object
 */
void SodaBuilder::getSodaGlass() {
    soda->gotSodaGlass = true;
}

/**
 * @fn void SodaBuilder::pourSoda()
 * @brief Pour Soda object
 */
void SodaBuilder::pourSoda() {
    soda->pouredSoda = true;
}

/**
 * @fn void SodaBuilder::assembleSoda()
 * @brief Assemble Soda object
 */
void SodaBuilder::assembleSoda() {
    soda->assembledSoda = true;
}

