/**
 * @file Order.cpp
 * @brief Contains implementation for the Order class
 * @authors Sange Tshakumane (u21479748)
*/

#include "Order.h"
using namespace std;


/**
 * Constructor of the order class
*/
Order::Order()
{

}

/**
 * Constructor of the order class
*/
Order::Order(Waiter* waiter) {
    this->waiter = waiter;
}

/**
 * Destructor of the order class
*/
Order::~Order()
{
    
}

/**
 * Function for adding an item to the order
*/
void Order::addToOrder(Order* item)
{

}

/**
 * Function for appending a complexOrder object to the order
*/
void Order::appendToOrder(Order* order)
{

}

/**
 * Function for calculating the price
*/
float Order::calculatePrice()
{
    return 0.0F;
}

/**
 * Function for getting the waiter attached to that specific order
*/
Waiter* Order::getWaiter() {
    return waiter;
}