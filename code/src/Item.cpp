/**
 * @file Item.cpp
 * @brief Contains implementation for the Item class
 * @authors
 * - Aidan Chapman (u22738917) 
 * - Sange Tshakumane (u21479748)
*/

#include "Item.h"

/**
 * @fn Item::Item(float price)
 * @param price a float
 * @brief Constructor of the Item class. Sets the float variable with the price input
 * @authors Aidan Chapman (u22738917)
*/
Item::Item(float price) : Order()
{
    this->price = price;
}

/**
 * @fn Item::~Item()
 * @brief Destructor of the Item class. Does nothing
*/
Item::~Item()
{
    
}

/**
 * @fn float Item::calculatePrice()
 * @brief Calculates the price of the item
 * @return float the price of the item
*/
float Item::calculatePrice() {
    return price;
}   