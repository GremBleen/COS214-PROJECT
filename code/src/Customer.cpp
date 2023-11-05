/**
 * @file Customer.cpp
 * @brief Contains implementation for the Customer class
 * @authors Aidan Chapman (u22738917)
*/

#include "Customer.h"
#include "Interface.h"
#include "Satisfied.h"
#include "Neutral.h"
#include "Unhappy.h"

/**
 * @fn Customer::Customer(int timestamp)
 * @param timestamp an int
 * @brief The constructor for the Customer class
 * @authors Aidan Chapman (u22738917)
*/
Customer::Customer(int timestamp)
{
    this->waiter = nullptr;
    this->timestamp = timestamp;
    this->satisfaction = new Satisfied();
}

/**
 * @fn Customer::~Customer()
 * @brief The destructor for the Customer class
 * @authors Aidan Chapman (u22738917)
*/
Customer::~Customer()
{
    this->waiter = nullptr;
}

void Customer::acceptWaiter(Waiter* waiter)
{
    // TODO : implement
}

/**
 * @fn string Customer::getOrderRequest()
 * @return a string
 * @brief A member function that generates a random order using Interface's generateOrderString() function
 * @authors Aidan Chapman (u22738917)
*/
string Customer::getOrderRequest()
{
    return Interface::generateOrderString();
}

void Customer::changeRating(Rating * rating)
{
    delete this->satisfaction;
    this->satisfaction = rating;
}

void Customer::receiveOrder(Order* order)
{
    // TODO : implement
}

float Customer::calculatePayment()
{

    // need to check the customer's start time
    // change Rating accordingly
    // get the price of the meal
    // add the tip (multiply price by calculateTip())
    // return
    return 0;
}

/**
 * @fn Waiter* Customer::getWaiter()
 * @return a waiter pointer
 * @brief The waiter member variable getter the Customer class
 * @authors Aidan Chapman (u22738917)
*/
Waiter* Customer::getWaiter()
{
    return this->waiter;
}