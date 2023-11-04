/**
 * @file Neutral.cpp
 * @brief Contains implementation for the Neutral class
 * @authors Sange Tshakumane (u21479748)
*/

#include <iostream>
#include "Neutral.h"
#include "Customer.h"
using namespace std;

/**
 * Function for changing the state of the passed in customer's rating to neutral
*/
void Neutral::changeState(Customer* customer) {
    customer->changeRating(new Neutral());
}

/**
 * Function for getting the rating of the current rating object
*/
string Neutral::getRating() {
    return "Neutral";
}

/**
 * Function fo calculating the tip which will be added to the bill.
 * 
 * Neutral customer gives 10% tip, satisfied customer gives 25% tip and unhappy customer doesn't give a tip.
*/
float Neutral::calculateTip() {
    return 0.0;
}