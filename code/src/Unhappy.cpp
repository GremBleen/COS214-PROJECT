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
 * Function for changing the state of the passed in customer's rating to unhappy
*/
void Unhappy::changeState(Customer* customer) {
    customer->changeRating(new Unhappy());
}

/**
 * Function for getting the rating of the current rating object
*/
string Unhappy::getRating() {
    return "Unhappy";
}

/**
 * Function fo calculating the tip which will be added to the bill.
 * 
 * Neutral customer gives 10% tip, satisfied customer gives 25% tip and unhappy customer doesn't give a tip.
*/
float Unhappy::calculateTip() {
    return 0.0;
}