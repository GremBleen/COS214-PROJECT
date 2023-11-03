/**
 * @file SteakBuilder.cpp
 * @brief Contains the implementation for the SteakBuilder class
 * @authors Douglas Porter (u21797545)
*/

#include "SteakBuilder.h"
#include "Steak.h"

SteakBuilder::SteakBuilder()
{
    this->steak = new Steak();
    this->main = steak;
}

SteakBuilder::~SteakBuilder()
{
    delete steak;
}

void SteakBuilder::prepareMeat()
{
    tenderiseSteak();
    this->main->preparedMain = true;
}

void SteakBuilder::seasonMeat()
{
    seasonSteak();
    this->main->seasonedMain = true;
}

void SteakBuilder::cookMeat()
{
    cookSteak();
    this->main->cookedMain = true;
}

void SteakBuilder::plateMain()
{
    plateSteak();
    this->steak->platedSteak = true;

    item = main;
}

void SteakBuilder::tenderiseSteak()
{
    this->steak->tenderisedSteak = true;
}


void SteakBuilder::seasonSteak()
{
    this->steak->seasonedSteak = true;
}

void SteakBuilder::cookSteak()
{
    this->steak->cookedSteak = true;
}

