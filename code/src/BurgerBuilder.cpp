/**
 * @file BurgerBuilder.cpp
 * @brief Contains the implementation for the BurgerBuilder class
 * @authors Douglas Porter (u21797545)
*/

#include "BurgerBuilder.h"
#include "Burger.h"

BurgerBuilder::BurgerBuilder()
{
}

BurgerBuilder::~BurgerBuilder()
{
}

void BurgerBuilder::prepareMeat()
{
    this->burger = new Burger();
    this->main = burger;

    butterBun();
    prepareVegetables();
    this->main->preparedMain = true;
}

void BurgerBuilder::seasonMeat()
{
    applySauce();
    this->main->seasonedMain = true;
}

void BurgerBuilder::cookMeat()
{
    cookPatty();
    this->burger->cookedPatty = true;
}

void BurgerBuilder::plateMain()
{
    assembleBurger();
    this->burger->assembledBurger = true;

    item = main;
}

void BurgerBuilder::butterBun()
{
    this->burger->butteredBun = true;
}

void BurgerBuilder::prepareVegetables()
{
    this->burger->preparedVegetables = true;
}

void BurgerBuilder::cookPatty()
{
    this->burger->cookedPatty = true;
}

void BurgerBuilder::applySauce()
{
    this->burger->assembledBurger = true;
}

void BurgerBuilder::assembleBurger()
{
    this->burger->assembledBurger = true;
}

