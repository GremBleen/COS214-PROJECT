/**
 * @file Burger.h
 * @brief Contains declaration for the Burger class
 * @authors Aidan Chapman (u22738917)
*/

#include "MainMeal.h"

using namespace std;

#ifndef BURGER_H
#define BURGER_H

class Burger : public MainMeal
{
    public:
        Burger();
        ~Burger();

        bool cookedPatty = false;
        bool assembledBurger = false;
        bool butteredBun = false;
        bool preparedVegetables = false;
};

#endif