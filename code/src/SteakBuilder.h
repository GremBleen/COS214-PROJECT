/**
 * @file SteakBuilder.h
 * @brief Contains declaration for the SteakBuilder class
 * 
 * SteakBuilder is a concrete builder for the Steak class.
 * Responsible for creating a Steak object.
 * 
 * @authors 
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "MainBuilder.h"
#include "Steak.h"

#ifndef STEAKBUILDER_H
#define STEAKBUILDER_H

class SteakBuilder : public MainBuilder {
public:
    SteakBuilder();
    ~SteakBuilder();

    // Operations used in template method
    void prepareMeat();
    void seasonMeat();
    void cookMeat();
    void plateMain();

    void tenderiseSteak();
    void seasonSteak();
    void cookSteak();
    void plateSteak();
private:
    Steak* steak; ///< Steak object
};

#endif