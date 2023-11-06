/**
 * @file BeerBuilder.cpp
 * @brief Implementation of the BeerBuilder class.
 * 
 * This file contains the implementation of the BeerBuilder class, which is responsible for building a Beer object.
 * The class defines methods for getting the glass, pouring the drink, and assembling the drink.
 * It also defines methods for getting the beer glass, pouring the beer, and assembling the beer.
 * 
 * @author 
 * - Graeme Blain (u22625462)
 */
#include "BeerBuilder.h"
#include <unistd.h>
#include <cstdlib>
#include <iostream>

/**
 * @fn BeerBuilder::BeerBuilder()
 * @brief Construct a new Beer Builder:: Beer Builder object
 * 
 */
BeerBuilder::BeerBuilder() {
}

/**
 * @fn BeerBuilder::~BeerBuilder()
 * @brief Destroy the Beer Builder:: Beer Builder object
 * 
 */
BeerBuilder::~BeerBuilder() {
}

/**
 * @fn void BeerBuilder::getGlass()
 * @brief prepare the glass
 */
void BeerBuilder::getGlass() {
    cout << "Beer Order" << endl;
    beer = new Beer();
    drink = beer;

    getBeerGlass();
    drink->gotGlass = true;
}

/**
 * @fn void BeerBuilder::pourDrink()
 * @brief Pour the Drink object
 * 
 */
void BeerBuilder::pourDrink() {
    pourBeer();
    drink->pouredDrink = true;
}

/**
 * @fn void BeerBuilder::assembleDrink()
 * @brief Assemble the Drink object
 * 
 */
void BeerBuilder::assembleDrink() {
    assembleBeer();
    drink->assembledDrink = true;

    item = drink;
}

/**
 * @fn void BeerBuilder::getBeerGlass()
 * @brief Get the Beer Glass object
 * 
 */
void BeerBuilder::getBeerGlass() {
    cout << "\tBeer Glass has been acquired..." << endl;
    beer->gotBeerGlass = true;
    sleep(1);
}

/**
 * @fn void BeerBuilder::pourBeer()
 * @brief Pour the Beer object
 * 
 */
void BeerBuilder::pourBeer() {
    cout << "\tPouring Beer..." << endl;
    beer->pouredBeer = true;
    sleep(2);
}

/**
 * @fn void BeerBuilder::assembleBeer()
 * @brief Assemble the Beer object
 * 
 */
void BeerBuilder::assembleBeer() {
    cout << "Beer Ready" << endl;
    beer->assembledBeer = true;
    sleep(1);
    cout << "Beer Ready" << endl;
}
