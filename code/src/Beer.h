/**
 * @file Beer.h
 * @brief Contains declaration for the Beer class
 * @authors Aidan Chapman (u22738917)
*/

#include "Drink.h"

using namespace std;

#ifndef BEER_H
#define BEER_H

class Beer : public Drink
{
    public:
        Beer();
        ~Beer();

    void prepareIngredients();
    void assembleItem();
    Item* getItem();

    void getGlass();
    void pourDrink();
};

#endif