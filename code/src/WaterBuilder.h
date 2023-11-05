/**
 * @file WaterBuilder.h
 * @brief Contains declaration for the WaterBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "DrinkBuilder.h"
#include "Water.h"

using namespace std;

#ifndef WATERBUILDER_H
#define WATERBUILDER_H

class WaterBuilder : public DrinkBuilder {
public:
    WaterBuilder();
    ~WaterBuilder();

    void getGlass();
    void pourDrink();
    void assembleDrink();

    void getWaterGlass();
    void pourWater();
    void assembleWater();

private:
    Water* water;
};

#endif