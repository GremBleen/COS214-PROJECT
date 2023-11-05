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
Order::Order(Waiter* waiter) {
    this->waiter = waiter;
}

/**
 * Function for getting the waiter attached to that specific order
*/
Waiter* Order::getWaiter() {
    return waiter;
}

/**
 * Destructor of the order class
*/
Order::~Order(){
    
}
