/**
 * @file Water.h
 * @brief Contains declaration for the Water class
 *
 * @authors
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "Drink.h"

#ifndef WATER_H
#define WATER_H

class Water : public Drink {
public:
    Water();
    ~Water();

    bool gotWaterGlass = false; ///< Whether a water glass has been obtained
    bool pouredWater = false; ///< Whether water has been poured into the glass
    bool assembledWater = false; ///< Whether the water has been assembled
};

#endif