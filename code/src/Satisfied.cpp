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
 * @fn Satisfied::Satisfied()
 * @brief Default constructor for the Satisfied class.
 * 
 */
Satisfied::Satisfied()
{

}

/**
 * @fn Satisfied::~Satisfied()
 * @brief Destructor for the Satisfied class.
 * 
 */
Satisfied::~Satisfied()
{
    
}

/**
 * @fn Satisfied::changeState(Customer* customer)
 * @brief Function for changing the rating of the customer.
 * 
 * @param customer 
 */
void Satisfied::changeState(Customer* customer) {
    customer->changeRating(new Satisfied());
}

/**
 * @fn Satisfied::getRating()
 * @brief Function for getting the rating of the customer.
 * 
 * @return string 
 */
string Satisfied::getRating() {
    return "Satisfied";
}

/**
 * @fn Satisfied::calculateTip()
 * @brief Function for calculating the tip of the customer.
 * 
 * @return float 
 */
float Satisfied::calculateTip() {
    return 0.25F;
}