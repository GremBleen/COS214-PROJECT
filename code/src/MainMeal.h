/**
 * @file MainMeal.h
 * @brief Contains declaration for the MainMeal class
 * @authors 
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "Item.h"

#ifndef MAINMEAL_H
#define MAINMEAL_H

class MainMeal : public Item
{
public:
    MainMeal(float price);
    ~MainMeal();

    bool preparedMain = false; ///< Whether the main has been prepared
    bool seasonedMain = false; ///< Whether the main has been seasoned
    bool cookedMain = false; ///< Whether the main has been cooked
    bool platedMain = false; ///< Whether the main has been plated
};

#endif