#include "WaterBuilder.h"

WaterBuilder::WaterBuilder() {
}

WaterBuilder::~WaterBuilder() {
}

void WaterBuilder::getGlass() {
    water = new Water();
    drink = water;

    getWaterGlass();
    drink->gotGlass = true;
}

void WaterBuilder::pourDrink() {
    pourWater();
    drink->pouredDrink = true;
}

void WaterBuilder::assembleDrink() {
    assembleWater();
    drink->assembledDrink = true;

    item = drink;
}

void WaterBuilder::getWaterGlass() {
    water->gotWaterGlass = true;
}

void WaterBuilder::pourWater() {
    water->pouredWater = true;
}

void WaterBuilder::assembleWater() {
    water->assembledWater = true;
}

