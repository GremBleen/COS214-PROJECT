#include "BeerBuilder.h"

BeerBuilder::BeerBuilder() {
}

BeerBuilder::~BeerBuilder() {
}

void BeerBuilder::getGlass() {
    beer = new Beer();
    drink = beer;

    getBeerGlass();
    drink->gotGlass = true;
}

void BeerBuilder::pourDrink() {
    pourBeer();
    drink->pouredDrink = true;
}

void BeerBuilder::assembleDrink() {
    assembleBeer();
    drink->assembledDrink = true;

    item = drink;
}

void BeerBuilder::getBeerGlass() {
    beer->gotBeerGlass = true;
}

void BeerBuilder::pourBeer() {
    beer->pouredBeer = true;
}

void BeerBuilder::assembleBeer() {
    beer->assembledBeer = true;
}

