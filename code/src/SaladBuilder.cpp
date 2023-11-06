/**
 * @file SaladBuilder.cpp   
 * @brief Contains implementation for the SaladBuilder class
 * 
 * @authors
 * - Graeme Blain (u22625462)
 */
#include "SaladBuilder.h"
#include <unistd.h>

/**
 * @fn SaladBuilder::SaladBuilder()x
 * @brief Construct a new Salad Builder:: Salad Builder object
 */
SaladBuilder::SaladBuilder() {
    //ctor
}

/**
 * @fn SaladBuilder::~SaladBuilder()
 * @brief Destroy the Salad Builder:: Salad Builder object
 */
SaladBuilder::~SaladBuilder() {
    //dtor
}

/**
 * @fn void SaladBuilder::washVegetables()
 * @brief Wash the vegetables
 *
 */
void SaladBuilder::washVegetables() {
    this->salad = new Salad();
    this->side = salad;

    washLettuce();
    washTomato();
    washCucumber();
    side->washedVegetables = true;
}

/**
 * @fn void SaladBuilder::chopVegetables()
 * @brief Chop the vegetables
 *
 */
void SaladBuilder::chopVegetables() {
    cutLettuce();
    cutTomato();
    cutCucumber();
    cutFeta();
    side->cutVegetables = true;
}

/**
 * @fn void SaladBuilder::assembleSide()
 * @brief Assemble the side
 *
 */
void SaladBuilder::assembleSide() {
    assembleSalad();
    side->assembledSide = true;
}

/**
 * @fn void SaladBuilder::plateSide()
 * @brief Plate the side
 *
 */
void SaladBuilder::plateSide() {
    item = side;
    side->platedSide = true;
}

/**
 * @fn void SaladBuilder::washLettuce()
 * @brief Wash the lettuce
 *
 */
void SaladBuilder::washLettuce() {
    salad->washedLettuce = true;
    sleep(1);
}

/**
 * @fn void SaladBuilder::cutLettuce()
 * @brief Cut the lettuce
 *
 */
void SaladBuilder::cutLettuce() {
    salad->cutLettuce = true;
    sleep(1);
}

/**
 * @fn void SaladBuilder::washTomato()
 * @brief Wash the tomato
 *
 */
void SaladBuilder::washTomato() {
    salad->washedTomato = true;
    sleep(1);
}

/**
 * @fn void SaladBuilder::cutTomato()
 * @brief Cut the tomato
 *
 */
void SaladBuilder::cutTomato() {
    salad->cutTomato = true;
    sleep(1);
}

/**
 * @fn void SaladBuilder::washCucumber()
 * @brief Wash the cucumber
 *
 */
void SaladBuilder::washCucumber() {
    salad->washedCucumber = true;
    sleep(1);
}

/**
 * @fn void SaladBuilder::cutCucumber()
 * @brief Cut the cucumber
 *
 */
void SaladBuilder::cutCucumber() {
    salad->cutCucumber = true;
    sleep(1);
}

/**
 * @fn void SaladBuilder::cutFeta()
 * @brief Cut the feta cheese
 *
 */
void SaladBuilder::cutFeta() {
    salad->cutFeta = true;
    sleep(1);
}

/**
 * @fn void SaladBuilder::assembleSalad()
 * @brief Assemble the salad
 *
 */
void SaladBuilder::assembleSalad() {
    salad->assembledSalad = true;
    sleep(1);
}