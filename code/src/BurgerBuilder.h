/**
 * @file BurgerBuilder.h
 * @brief Contains declaration for the BurgerBuilder class
 * 
 * This file contains the declaration for the BurgerBuilder class. 
 * BurgerBuilder is a concrete builder class that inherits from the MainBuilder class.
 * It is responsible for building a Burger object using the template method pattern.
 * 
 * @see MainBuilder
 * @see Burger
 * 
 * @authors 
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
 * - Douglas Porter (u21797545)
*/

#include "MainBuilder.h"
#include "Burger.h"

#ifndef BURGERBUILDER_H
#define BURGERBUILDER_H

class BurgerBuilder : public MainBuilder
{
public:
    BurgerBuilder();
    ~BurgerBuilder();

    // Operations used in template method
    void prepareMeat();
    void seasonMeat();
    void cookMeat();
    void plateMain();

    void butterBun();
    void prepareVegetables();
    void cookPatty();
    void applySauce();
    void assembleBurger();

protected:
    Burger *burger; ///< Burger object
};

#endif
