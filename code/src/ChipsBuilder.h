/**
 * @file ChipsBuilder.h
 * @brief Contains declaration for the ChipsBuilder class
 *
 * Represents a concrete builder in the builder pattern. Responsible for building a Chips object.
 *
 * @author
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "SideBuilder.h"
#include "Chips.h"

#ifndef CHIPSBUILDER_H
#define CHIPSBUILDER_H

class ChipsBuilder : public SideBuilder {
public:
    ChipsBuilder();
    ~ChipsBuilder();

    void washVegetables();
    void chopVegetables();
    void assembleSide();
    void plateSide();

    void washPotato();
    void cutPotato();
    void fryPotato();
    void seasonChips();

private:
    Chips* chips; ///< Chips object
};

#endif