#include "SaladBuilder.h"

SaladBuilder::SaladBuilder() {
    //ctor
}

SaladBuilder::~SaladBuilder() {
    //dtor
}

void SaladBuilder::washVegetables() {
    this->salad = new Salad();
    this->side = salad;

    washLettuce();
    washTomato();
    washCucumber();
    side->washedVegetables = true;
}

void SaladBuilder::chopVegetables() {
    cutLettuce();
    cutTomato();
    cutCucumber();
    cutFeta();
    side->cutVegetables = true;
}

void SaladBuilder::assembleSide() {
    assembleSalad();
    side->assembledSide = true;
}

void SaladBuilder::plateSide() {
    item = side;
    side->platedSide = true;
}

void SaladBuilder::washLettuce() {
    salad->washedLettuce = true;
}

void SaladBuilder::cutLettuce() {
    salad->cutLettuce = true;
}

void SaladBuilder::washTomato() {
    salad->washedTomato = true;
}

void SaladBuilder::cutTomato() {
    salad->cutTomato = true;
}

void SaladBuilder::washCucumber() {
    salad->washedCucumber = true;
}

void SaladBuilder::cutCucumber() {
    salad->cutCucumber = true;
}   

void SaladBuilder::cutFeta() {
    salad->cutFeta = true;
}

void SaladBuilder::assembleSalad() {
    salad->assembledSalad = true;
}