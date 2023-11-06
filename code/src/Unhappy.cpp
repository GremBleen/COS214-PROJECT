/**
 * @file Unhappy.cpp
 * @brief Contains implementation for the Unhappy class
 * @authors Sange Tshakumane (u21479748)
*/

#include <iostream>
#include "Unhappy.h"
#include "Customer.h"
using namespace std;

/**
 * @fn Unhappy::Unhappy()
 * @brief Construct a new Unhappy:: Unhappy object
 */
Unhappy::Unhappy() : Rating() {

}

/**
 * @fn Unhappy::~Unhappy()
 * @brief Destroy the Unhappy:: Unhappy object
 */
Unhappy::~Unhappy() {

}

/**
 * @fn Unhappy::changeState(Customer* customer)
 * @brief Function for changing the state of the customer.
 *
 * @param customer
 */
void Unhappy::changeState(Customer* customer) {
    customer->changeRating(new Unhappy());
}

/**
 * @fn string Unhappy::getRating()
 * @brief Function for getting the rating of the customer.
 *
 * @return string
 */
string Unhappy::getRating() {
    return "Unhappy";
}

/**
 * @fn float Unhappy::calculateTip()
 * @brief Function for calculating the tip of the customer.
 *
 * @return float
 */
float Unhappy::calculateTip() {
    return 0.0F;
}