/**
 * @file SteakBuilder.cpp
 * @brief Contains the implementation for the SteakBuilder class
 * @authors Douglas Porter (u21797545)
*/

#include "SteakBuilder.h"
#include "Steak.h"

SteakBuilder::SteakBuilder() {

}

SteakBuilder::~SteakBuilder() {

}

void SteakBuilder::prepareMeat() {
    this->steak = new Steak();
    this->main = steak;

    tenderiseSteak();
    this->main->preparedMain = true;
}

void SteakBuilder::seasonMeat() {
    seasonSteak();
    this->main->seasonedMain = true;
}

void SteakBuilder::cookMeat() {
    cookSteak();
    this->main->cookedMain = true;
}

void SteakBuilder::plateMain() {
    plateSteak();
    this->main->platedMain = true;

    item = main;
}

void SteakBuilder::tenderiseSteak() {
    this->steak->tenderisedSteak = true;
}

void SteakBuilder::seasonSteak() {
    this->steak->seasonedSteak = true;
}

void SteakBuilder::cookSteak() {
    this->steak->cookedSteak = true;
}

void SteakBuilder::plateSteak() {
    this->steak->platedSteak = true;
}

