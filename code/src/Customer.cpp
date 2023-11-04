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
    this->satisfaction = new Satisfied();
    // TODO : implement rating functionality
}

/**
 * @fn Customer::~Customer()
 * @brief The destructor for the Customer class
 * @authors Aidan Chapman (u22738917)
*/
Customer::~Customer()
{
    if (this->waiter != nullptr)
    {
        delete this->waiter;
    }
    if (this->satisfaction != nullptr)
    {
        delete this->satisfaction;
    }
    if (this->order != nullptr)
    {
        delete this->order;
    }
    // TODO : implement order functionality
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


void Customer::acceptWaiter(Waiter *waiter)
{
    this->waiter = waiter;
    this->waiter->visitCustomer(this);
}

void Customer::changeRating(Rating *rating)
{
    if (this->satisfaction != nullptr)
    {
        delete this->satisfaction;
    }
    this->satisfaction = rating;
}

void Customer::receiveOrder(Order *order)
{
    this->order = order;
    cout << "Customer received order"<< endl;
}

float Customer::calculatePayment()
{
    return this->satisfaction->getTip();
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


