/**
 * @file SodaBuilder.h
 * @brief Contains delcaration for the SodaBuilder class
 *
 * SodaBuilder is a concrete builder for the DrinkBuilder interface. It is used to create a Soda object.
 * It is responsible for building a Soda object using the template method pattern.
 *
 * @authors
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "DrinkBuilder.h"
#include "Soda.h"


#ifndef SODABUILDER_H
#define SODABUILDER_H

class SodaBuilder : public DrinkBuilder {
public:
    SodaBuilder();
    ~SodaBuilder();

    void getGlass();
    void pourDrink();
    void assembleDrink();

    void getSodaGlass();
    void pourSoda();
    void assembleSoda();

private:
    Soda* soda; ///< Soda object
};

#endif