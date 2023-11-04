/**
 * @file Customer.cpp
 * @brief Contains implementation for the Customer class
 * @authors Aidan Chapman (u22738917)
*/

#include "Customer.h"
#include "Interface.h"

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
    // TODO : implement rating functionality
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
    // TODO : implement
}

void Customer::receiveOrder(Order* order)
{
    // TODO : implement
}

float Customer::calculatePayment()
{
    // TODO : implement
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