/**
 * @file FishBuilder.h
 * @brief Contains declaration for the FishBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "MainBuilder.h"
#include "Fish.h"

#ifndef FISHBUILDER_H
#define FISHBUILDER_H

class FishBuilder : public MainBuilder
{
public:
    FishBuilder();
    ~FishBuilder();

    // Operations used in template method
    void prepareMeat();
    void seasonMeat();
    void cookMeat();
    void plateMain();

    void descaleFish();
    void seasonFish();
    void cookFish();
    void plateFish();

protected:
    Fish *fish;
};

#endif