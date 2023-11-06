/**
 * @file WaterBuilder.cpp
 * @brief Contains implementation for the WaterBuilder class
 *
 * @authors
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
 */
#include "WaterBuilder.h"
#include <unistd.h>
#include <cstdlib>
#include <iostream>

/**
 * @fn WaterBuilder::WaterBuilder()
 * @brief Construct a new Water Builder:: Water Builder object
 */
WaterBuilder::WaterBuilder()
{
}

/**
 * @fn WaterBuilder::~WaterBuilder()
 * @brief Destroy the Water Builder:: Water Builder object
 */
WaterBuilder::~WaterBuilder()
{
}

/**
 * @fn void WaterBuilder::getGlass()
 * @brief prepare the glass
 */
void WaterBuilder::getGlass()
{
    cout << "Water Order" << endl;
    water = new Water();
    drink = water;

    getWaterGlass();
    drink->gotGlass = true;
}

/**
 * @fn void WaterBuilder::pourDrink()
 * @brief Pour the Drink object
 */
void WaterBuilder::pourDrink()
{
    pourWater();
    drink->pouredDrink = true;
}

/**
 * @fn void WaterBuilder::assembleDrink()
 * @brief Assemble the Drink object
 */
void WaterBuilder::assembleDrink()
{
    assembleWater();
    drink->assembledDrink = true;

    item = drink;
}

/**
 * @fn void WaterBuilder::getWaterGlass()
 * @brief Get the Water Glass object
 */
void WaterBuilder::getWaterGlass()
{
    cout << "\tGetting Glass" << endl;
    water->gotWaterGlass = true;
    sleep(1);
}

/**
 * @fn void WaterBuilder::pourWater()
 * @brief Pour the Water object
 */
void WaterBuilder::pourWater()
{
    cout << "\tPouring Water..." << endl;
    water->pouredWater = true;
    sleep(1);
}

/**
 * @fn void WaterBuilder::assembleWater()
 * @brief Assemble the Water object
 */
void WaterBuilder::assembleWater()
{
    water->assembledWater = true;
    sleep(1);
    cout << "Water Ready" << endl;
}
