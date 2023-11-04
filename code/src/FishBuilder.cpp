/**
 * @file FishBuilder.cpp
 * @brief Contains the implementation for the FishBuilder class
 * @authors Douglas Porter (u21797545)
*/

#include "FishBuilder.h"
#include "Fish.h"

FishBuilder::FishBuilder()
{
    this->fish = new Fish();
    this->main = fish;
}

FishBuilder::~FishBuilder()
{
    delete fish;
}

void FishBuilder::prepareMeat()
{
    this->descaleFish();
    main->preparedMain = true;
}

void FishBuilder::seasonMeat()
{
    this->seasonFish();
    main->seasonedMain = true;
}

void FishBuilder::cookMeat()
{
    this->cookFish();
    main->cookedMain = true;
}

void FishBuilder::plateMain()
{
    this->plateFish();
    main->platedMain = true;
}

void FishBuilder::descaleFish()
{
    fish->descaledFish = true;
}

void FishBuilder::seasonFish()
{
    fish->seasonedFish = true;
}

void FishBuilder::cookFish()
{
    fish->cookedFish = true;
}

void FishBuilder::plateFish()
{
    fish->platedFish = true;
}






