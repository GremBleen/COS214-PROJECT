/**
 * @file Satisfied.cpp
 * @brief Contains implementation for the Satisfied class
 * @authors Sange Tshakumane (u21479748)
*/

#include <iostream>
#include "Satisfied.h"
#include "Customer.h"
using namespace std;

/**
 * Function for changing the state of the passed in customer's rating to satisfied
*/
void Satisfied::changeState(Customer* customer) {
    customer->changeRating(new Satisfied());
}

/**
 * Function for getting the rating of the current rating object
*/
string Satisfied::getRating() {
    return "Satisfied";
}

/**
 * Function fo calculating the tip which will be added to the bill.
 * 
 * Neutral customer gives 10% tip, satisfied customer gives 25% tip and unhappy customer doesn't give a tip.
*/
float Satisfied::calculateTip() {
    return 0.0;
}