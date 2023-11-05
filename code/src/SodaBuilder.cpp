#include "SodaBuilder.h"

SodaBuilder::SodaBuilder() {
}

SodaBuilder::~SodaBuilder() {
}

void SodaBuilder::getGlass() {
    soda = new Soda();
    drink = soda;

    getSodaGlass();
    drink->gotGlass = true;
}

void SodaBuilder::pourDrink() {
    pourSoda();
    drink->pouredDrink = true;
}

void SodaBuilder::assembleDrink() {
    assembleSoda();
    drink->assembledDrink = true;

    item = drink;
}

void SodaBuilder::getSodaGlass() {
    soda->gotSodaGlass = true;
}

void SodaBuilder::pourSoda() {
    soda->pouredSoda = true;
}

void SodaBuilder::assembleSoda() {
    soda->assembledSoda = true;
}

