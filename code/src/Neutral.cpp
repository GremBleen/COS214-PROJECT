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
 * @fn Neutral::Neutral()
 * @brief Constructs a new Neutral object.
 * 
 */
Neutral::Neutral() : Rating() {

}

/**
 * @fn Neutral::~Neutral()
 * @brief Destroys the Neutral object.
 * 
 */
Neutral::~Neutral() {

}

/**
 * @fn Neutral::changeState(Customer* customer)
 * @brief Function for changing the rating of the customer.
 * 
 * @param customer The customer whose rating will be changed.
*/
void Neutral::changeState(Customer* customer) {
    customer->changeRating(new Neutral());
}

/**
 * @fn Neutral::getRating()
 * @brief Function for getting the rating of the customer.
 * 
 * @return string The rating of the customer.
*/
string Neutral::getRating() {
    return "Neutral";
}

/**
 * @fn Neutral::calculateTip()
 * @brief Function for calculating the tip of the customer.
 * 
 * @return float The tip of the customer.
*/
float Neutral::calculateTip() {
    return 0.1F;
}