/**
 * @file SaladBuilder.h
 * @brief Contains declaration for the SaladBuilder class
 *
 * SaladBuilder is a concrete builder for the Salad class and inherits from SideBuilder.
 * It is responsible for building a Salad object using the template method pattern.
 *
 * @authors
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "SideBuilder.h"
#include "Salad.h"

#ifndef SALADBUILDER_H
#define SALADBUILDER_H

class SaladBuilder : public SideBuilder {
public:
    SaladBuilder();
    ~SaladBuilder();

    void washVegetables();
    void chopVegetables();
    void assembleSide();
    void plateSide();

    void washLettuce();
    void cutLettuce();
    void washTomato();
    void cutTomato();
    void washCucumber();
    void cutCucumber();
    void cutFeta();
    void assembleSalad();

private:
    Salad* salad; ///< Salad object
};

#endif