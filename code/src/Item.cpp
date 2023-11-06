/**
 * @file Item.cpp
 * @brief Contains implementation for the Item class
 * @authors Sange Tshakumane (u21479748)
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

Item::~Item()
{
    
}

/**
 * Function for getting the price of this item
*/
float Item::calculatePrice() {
    return price;
}   