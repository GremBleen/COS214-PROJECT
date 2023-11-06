/**
 * @file WaterBuilder.h
 * @brief Contains declaration for the WaterBuilder class
 *
 * This file contains the declarations for the functions to build a Water object
 * using the Builder design pattern.
 * WaterBuilder is a concrete builder class that inherits from the DrinkBuilder class.
 * It is responsible for building a Water object using the template method pattern.
 *
 * @authors
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "DrinkBuilder.h"
#include "Water.h"

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
    Water* water; ///< Water object
};

#endif