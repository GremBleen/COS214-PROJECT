/**
 * @file BurgerBuilder.cpp
 * @brief Contains the implementation for the BurgerBuilder class
 * 
 * This file contains the implementation of the BurgerBuilder class, which is responsible for building a Burger object.
 * 
 * @authors 
 * - Douglas Porter (u18061592)
 * - Graeme Blain (u22625462)
 */

#include "BurgerBuilder.h"
#include <unistd.h>
#include <cstdlib>
#include <iostream>

/**
 * @fn BurgerBuilder::BurgerBuilder()
 * @brief Constructs a new BurgerBuilder object.
 * 
 */
BurgerBuilder::BurgerBuilder()
{
}

/**
 * @fn BurgerBuilder::~BurgerBuilder()
 * @brief Destructor for the BurgerBuilder class.
 * 
 */
BurgerBuilder::~BurgerBuilder()
{
}

/**
 * @fn void BurgerBuilder::prepareMeat()
 * @brief Prepares the meat for the burger
 * 
 */
void BurgerBuilder::prepareMeat()
{
    cout << "Burger Order" << endl;
    this->burger = new Burger();
    this->main = burger;

    butterBun();
    prepareVegetables();
    this->main->preparedMain = true;
}

/**
 * @fn void BurgerBuilder::seasonMeat()
 * @brief Seasons the meat for the burger
 * 
 */
void BurgerBuilder::seasonMeat()
{
    applySauce();
    this->main->seasonedMain = true;
}

/**
 * @fn void BurgerBuilder::cookMeat()
 * @brief Cooks the meat for the burger
 * 
 */
void BurgerBuilder::cookMeat()
{
    cookPatty();
    this->burger->cookedPatty = true;
}

/**
 * @fn void BurgerBuilder::plateMain()
 * @brief Plates the main item of the burger
 * 
 */
void BurgerBuilder::plateMain()
{
    assembleBurger();
    this->burger->assembledBurger = true;

    this->item = main;
}

/**
 * @fn void BurgerBuilder::butterBun()
 * @brief Butters the bun for the burger
 * 
 */
void BurgerBuilder::butterBun()
{
    cout << "\tButtering the buns..." << endl;
    this->burger->butteredBun = true;
    sleep(1);
}

/**
 * @fn void BurgerBuilder::prepareVegetables()
 * @brief Prepares the vegetables for the burger
 * 
 */
void BurgerBuilder::prepareVegetables()
{
    cout << "\tPreparing the vegetables..." << endl;
    this->burger->preparedVegetables = true;
    sleep(2);
}

/**
 * @fn void BurgerBuilder::cookPatty()
 * @brief Cooks the patty for the burger
 * 
 */
void BurgerBuilder::cookPatty()
{
    cout << "\tCooking the patty..." << endl;
    this->burger->cookedPatty = true;
    sleep(3);
}

/**
 * @fn void BurgerBuilder::applySauce()
 * @brief Applies sauce to the burger
 * 
 */
void BurgerBuilder::applySauce()
{
    cout << "\tPutting the burger together..." << endl;
    this->burger->assembledBurger = true;
    sleep(1);
}

/**
 * @fn void BurgerBuilder::assembleBurger()
 * @brief Assembles the burger
 * 
 */
void BurgerBuilder::assembleBurger()
{
    this->burger->assembledBurger = true;
    sleep(1);
    cout << "Burger Ready" << endl;
}
