/**
 * @file MainMeal.h
 * @brief Contains declaration for the MainMeal class
 * @authors Aidan Chapman (u22738917)
*/

#include "Item.h"

#ifndef MAINMEAL_H
#define MAINMEAL_H

class MainMeal : public Item
{
public:
    MainMeal(float price);
    ~MainMeal();

    bool preparedMain = false;
    bool seasonedMain = false;
    bool cookedMain = false;
    bool platedMain = false;
};

#endif