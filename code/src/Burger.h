/**
 * @file Burger.h
 * @brief Contains declaration for the Burger class
 * 
 * The Burger class is a subclass of the MainMeal class. It represents a burger
 * 
 * @authors 
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
 * - Douglas Porter (u21797545)
*/

#include "MainMeal.h"

#ifndef BURGER_H
#define BURGER_H

class Burger : public MainMeal
{
    public:
        Burger();
        ~Burger();

        bool cookedPatty = false; ///< Whether the patty has been cooked
        bool assembledBurger = false; ///< Whether the burger has been assembled
        bool butteredBun = false; ///< Whether the bun has been buttered
        bool preparedVegetables = false; ///< Whether the vegetables have been prepared
};

#endif