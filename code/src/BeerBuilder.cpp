

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

/**
 * @brief Construct a new Beer Builder:: Beer Builder object
 * 
 */
BeerBuilder::BeerBuilder() {
}

/**
 * @brief Destroy the Beer Builder:: Beer Builder object
 * 
 */
BeerBuilder::~BeerBuilder() {
}

/**
 * @brief Get the Glass object
 * 
 */
void BeerBuilder::getGlass() {
    beer = new Beer();
    drink = beer;

    getBeerGlass();
    drink->gotGlass = true;
}

/**
 * @brief Pour the Drink object
 * 
 */
void BeerBuilder::pourDrink() {
    pourBeer();
    drink->pouredDrink = true;
}

/**
 * @brief Assemble the Drink object
 * 
 */
void BeerBuilder::assembleDrink() {
    assembleBeer();
    drink->assembledDrink = true;

    item = drink;
}

/**
 * @brief Get the Beer Glass object
 * 
 */
void BeerBuilder::getBeerGlass() {
    beer->gotBeerGlass = true;
}

/**
 * @brief Pour the Beer object
 * 
 */
void BeerBuilder::pourBeer() {
    beer->pouredBeer = true;
}

/**
 * @brief Assemble the Beer object
 * 
 */
void BeerBuilder::assembleBeer() {
    beer->assembledBeer = true;
}
