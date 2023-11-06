/**
 * @file SodaBuilder.cpp
 * @brief Contains implementation for the SodaBuilder class
 * 
 * @authors
 * - Graeme Blain (u22625462)
 */
#include "SodaBuilder.h"
#include <unistd.h>
#include <cstdlib>
#include <iostream>

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
    cout << "Soda Order"<<endl;
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
    cout << "\tGetting Glass..."<<endl;
    soda->gotSodaGlass = true;
    sleep(1);
}

/**
 * @fn void SodaBuilder::pourSoda()
 * @brief Pour Soda object
 */
void SodaBuilder::pourSoda() {
    cout << "\tPouring Soda..."<<endl;
    soda->pouredSoda = true;
    sleep(1);
}

/**
 * @fn void SodaBuilder::assembleSoda()
 * @brief Assemble Soda object
 */
void SodaBuilder::assembleSoda() {
    soda->assembledSoda = true;
    sleep(1);
    cout << "Soda Ready"<<endl;
}

