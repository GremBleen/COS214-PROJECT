/**
 * @file FishBuilder.cpp
 * @brief Contains the implementation for the FishBuilder class
 * @authors
 * - Graeme Blain (u22625462) 
 * - Douglas Porter (u21797545)
 */

#include "FishBuilder.h"
#include "Fish.h"

/**
 * @fn FishBuilder::FishBuilder()
 * @brief Constructs a new FishBuilder object
 * 
 */
FishBuilder::FishBuilder()
{
}

/**
 * @fn FishBuilder::~FishBuilder()
 * @brief Destroys the FishBuilder object
 * 
 */
FishBuilder::~FishBuilder()
{
}

/**
 * @fn void FishBuilder::prepareMeat()
 * @brief Prepares the fish by descaling it and marking it as prepared.
 * 
 */
void FishBuilder::prepareMeat()
{
    this->fish = new Fish();
    this->main = fish;

    this->descaleFish();
    main->preparedMain = true;
}

/**
 * @fn void FishBuilder::seasonMeat()
 * @brief Seasons the fish and marks it as seasoned.
 * 
 */
void FishBuilder::seasonMeat()
{
    this->seasonFish();
    main->seasonedMain = true;
}

/**
 * @fn void FishBuilder::cookMeat()
 * @brief Cooks the fish and marks it as cooked.
 * 
 */
void FishBuilder::cookMeat()
{
    this->cookFish();
    main->cookedMain = true;
}

/**
 * @fn void FishBuilder::plateMain()
 * @brief Plates the fish and marks it as plated.
 * 
 */
void FishBuilder::plateMain()
{
    this->plateFish();
    main->platedMain = true;

    this->item = main;
}

/**
 * @fn void FishBuilder::descaleFish()
 * @brief Descales the fish and marks it as descaled.
 * 
 */
void FishBuilder::descaleFish()
{
    fish->descaledFish = true;
}

/**
 * @fn void FishBuilder::seasonFish()
 * @brief Seasons the fish and marks it as seasoned.
 * 
 */
void FishBuilder::seasonFish()
{
    fish->seasonedFish = true;
}

/**
 * @fn void FishBuilder::cookFish()
 * @brief Cooks the fish and marks it as cooked.
 * 
 */
void FishBuilder::cookFish()
{
    fish->cookedFish = true;
}

/**
 * @fn void FishBuilder::plateFish()
 * @brief Plates the fish and marks it as plated.
 * 
 */
void FishBuilder::plateFish()
{
    fish->platedFish = true;
}
