/**
 * @file SteakBuilder.cpp
 * @brief Contains the implementation for the SteakBuilder class
 * @authors 
 * - Graeme Blain (u22625462)
 * - Douglas Porter (u21797545)
*/

#include "SteakBuilder.h"
#include "Steak.h"
#include <unistd.h>

/**
 * @fn SteakBuilder::SteakBuilder()
 * @brief Construct a new Steak Builder:: Steak Builder object 
 */
SteakBuilder::SteakBuilder() {

}

/**
 * @fn SteakBuilder::~SteakBuilder()
 * @brief Destroy the Steak Builder:: Steak Builder object
 */
SteakBuilder::~SteakBuilder() {

}

/**
 * @fn void SteakBuilder::prepareMeat()
 * @brief Prepare the main meal
 */
void SteakBuilder::prepareMeat() {
    this->steak = new Steak();
    this->main = steak;

    tenderiseSteak();
    this->main->preparedMain = true;
}

/**
 * @fn void SteakBuilder::seasonMeat()
 * @brief Season the main meal
 */
void SteakBuilder::seasonMeat() {
    seasonSteak();
    this->main->seasonedMain = true;
}

/**
 * @fn void SteakBuilder::cookMeat()
 * @brief Cook the main meal
 */
void SteakBuilder::cookMeat() {
    cookSteak();
    this->main->cookedMain = true;
}

/**
 * @fn void SteakBuilder::plateMeat()
 * @brief Plate the main meal
 */
void SteakBuilder::plateMain() {
    plateSteak();
    this->main->platedMain = true;

    item = main;
}

/**
 * @fn void SteakBuilder::tenderiseSteak()
 * @brief Tenderise the steak
 */
void SteakBuilder::tenderiseSteak() {
    this->steak->tenderisedSteak = true;
    sleep(2);
}

/**
 * @fn void SteakBuilder::seasonSteak()
 * @brief Season the steak
 */
void SteakBuilder::seasonSteak() {
    this->steak->seasonedSteak = true;
    sleep(1);
}

/**
 * @fn void SteakBuilder::cookSteak()
 * @brief Cook the steak
 */
void SteakBuilder::cookSteak() {
    this->steak->cookedSteak = true;
    sleep(3);
}

/**
 * @fn void SteakBuilder::plateSteak()
 * @brief Plate the steak
 */
void SteakBuilder::plateSteak() {
    this->steak->platedSteak = true;
    sleep(1);
}

