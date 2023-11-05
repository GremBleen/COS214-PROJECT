/**
 * @file ComplexOrder.cpp
 * @brief Contains implementation for the ComplexOrder class
 * @authors Sange Tshakumane (u21479748)
*/

#include "ComplexOrder.h"
#include <list>
using namespace std;

/**
 * Constructor for the ComplexOrder class
*/
ComplexOrder::ComplexOrder() : Order(this->getWaiter()),  items() {}

/**
 * Destructor for the ComplexOrder class
*/
ComplexOrder::~ComplexOrder() {}

/**
 * Function for adding a new item to the customer's total order
*/
void ComplexOrder::addToOrder(Order* item) {
    items.push_back(item);
}

/**
 * Function for adding a new item to the customer's total order
*/
void ComplexOrder::appendToOrder(Order* orderItem) {
    items.push_back(orderItem);
}

/**
 * Function for calculating the price of the order in full with all items in the order taken into account
*/
float ComplexOrder::calculatePrice() {
    float total = 0.0;

    for (list<Order*>::iterator it = items.begin(); it != items.end() ; ++it) {
        total += (*it)->calculatePrice();
    }

    return total;
}