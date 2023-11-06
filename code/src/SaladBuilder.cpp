/**
 * @file SaladBuilder.cpp   
 * @brief Contains implementation for the SaladBuilder class
 * 
 * @authors
 * - Graeme Blain (u22625462)
 */
#include "SaladBuilder.h"

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
}

/**
 * @fn void SaladBuilder::cutLettuce()
 * @brief Cut the lettuce
 *
 */
void SaladBuilder::cutLettuce() {
    salad->cutLettuce = true;
}

/**
 * @fn void SaladBuilder::washTomato()
 * @brief Wash the tomato
 *
 */
void SaladBuilder::washTomato() {
    salad->washedTomato = true;
}

/**
 * @fn void SaladBuilder::cutTomato()
 * @brief Cut the tomato
 *
 */
void SaladBuilder::cutTomato() {
    salad->cutTomato = true;
}

/**
 * @fn void SaladBuilder::washCucumber()
 * @brief Wash the cucumber
 *
 */
void SaladBuilder::washCucumber() {
    salad->washedCucumber = true;
}

/**
 * @fn void SaladBuilder::cutCucumber()
 * @brief Cut the cucumber
 *
 */
void SaladBuilder::cutCucumber() {
    salad->cutCucumber = true;
}

/**
 * @fn void SaladBuilder::cutFeta()
 * @brief Cut the feta cheese
 *
 */
void SaladBuilder::cutFeta() {
    salad->cutFeta = true;
}

/**
 * @fn void SaladBuilder::assembleSalad()
 * @brief Assemble the salad
 *
 */
void SaladBuilder::assembleSalad() {
    salad->assembledSalad = true;
}

/**
 * @fn SaladBuilder::SaladBuilder()
 * @brief Construct a new Salad Builder:: Salad Builder object
 */
void SaladBuilder::cutLettuce() {
    salad->cutLettuce = true;
}

/**
 * @fn SaladBuilder::washTomato()
 * @brief Wash the tomato
 */
void SaladBuilder::washTomato() {
    salad->washedTomato = true;
}

/**
 * @fn SaladBuilder::cutTomato()
 * @brief Cut the tomato
 */
void SaladBuilder::cutTomato() {
    salad->cutTomato = true;
}

/**
 * @fn SaladBuilder::washCucumber()
 * @brief Wash the cucumber
 */
void SaladBuilder::washCucumber() {
    salad->washedCucumber = true;
}

/**
 * @fn SaladBuilder::cutCucumber()
 * @brief Cut the cucumber
 */
void SaladBuilder::cutCucumber() {
    salad->cutCucumber = true;
}

/**
 * @fn SaladBuilder::cutFeta()
 * @brief Cut the feta
 */
void SaladBuilder::cutFeta() {
    salad->cutFeta = true;
}

/**
 * @fn SaladBuilder::assembleSalad()
 * @brief Assemble the salad
 */
void SaladBuilder::assembleSalad() {
    salad->assembledSalad = true;
}
