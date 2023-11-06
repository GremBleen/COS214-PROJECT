#include "ChipsBuilder.h"

ChipsBuilder::ChipsBuilder() {
    //ctor
}

ChipsBuilder::~ChipsBuilder() {
    //dtor
}

void ChipsBuilder::washVegetables() {
    this->chips = new Chips();
    this->side = chips;

    washPotato();
    side->washedVegetables = true;
}

void ChipsBuilder::chopVegetables() {
    cutPotato();
    side->cutVegetables = true;
}

void ChipsBuilder::assembleSide() {
    fryPotato();
    seasonChips();
    side->assembledSide = true;
}

void ChipsBuilder::plateSide() {
    side->platedSide = true;
    item = side;
}

void ChipsBuilder::washPotato() {
    chips->washedPotatoes = true;
}

void ChipsBuilder::cutPotato() {
    chips->cutPotatoes = true;
}

void ChipsBuilder::fryPotato() {
    chips->friedPotatoes = true;
}

void ChipsBuilder::seasonChips() {
    chips->seasonedChips = true;
}