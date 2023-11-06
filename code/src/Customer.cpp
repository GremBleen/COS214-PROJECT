/**
 * @file Customer.cpp
 * @brief Contains implementation for the Customer class
 * 
 * This file contains the implementation of the Customer class, which is responsible for representing a customer in the restaurant.
 * 
 * @authors Aidan Chapman (u22738917)
 */

#include <iostream>
#include "Customer.h"
#include "Order.h"
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
    this->table = nullptr;
    this->order = nullptr;
    this->satisfaction = new Satisfied();
}

/**
 * @fn Customer::~Customer()
 * @brief The destructor for the Customer class
 * @authors Aidan Chapman (u22738917), Douglas Porter (u21797545), Kabelo Chuene(u14046492)
 */
Customer::~Customer()
{
    if (this->satisfaction != nullptr)
    {
        delete this->satisfaction;
        this->satisfaction = nullptr;
    }
    if (this->order != nullptr)
    {
        delete this->order;
        this->order = nullptr;
    }
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

/**
 * @fn void Customer::acceptWaiter(Waiter *waiter)
 * @param waiter a Waiter pointer
 * @brief The waiter member variable setter for the Customer class
 * @authors Aidan Chapman (u22738917), Douglas Porter (u21797545), Kabelo Chuene(u14046492)
 */
void Customer::acceptWaiter(Waiter *waiter)
{
    this->waiter = waiter;
    this->waiter->visitCustomer(this);
}

/**
 * @fn void Customer::changeRating(Rating *rating)
 * @param rating a Rating pointer
 * @brief The satisfaction member variable setter for the Customer class, also deletes the previous rating if it exists
 * @authors Aidan Chapman (u22738917), Douglas Porter (u21797545)
 */
void Customer::changeRating(Rating *rating)
{
    delete this->satisfaction;
    this->satisfaction = rating;
}

/**
 * @fn void Customer::receiveOrder(Order *order)
 * @param order an Order pointer
 * @brief Sets the order member variable to the passed in value
 * @authors Aidan Chapman (u22738917), Douglas Porter (u21797545)
 */
void Customer::receiveOrder(Order *order)
{
    this->order = order;
}

/**
 * @fn float Customer::calculatePayment()
 * @return a float
 * @brief A function used to calculate what the customer pays for their meal, including the tip based on how happy they were with the service
 * @authors Aidan Chapman (u22738917)
 */
float Customer::calculatePayment()
{
    int diff = Interface::getCurrentUnixTime() - getTimestamp();

    if(diff < 30)
    {
        
    }
    else if(diff < 60)
    {
        changeRating(new Neutral());
    }
    else
    {
        changeRating(new Unhappy());
    }

    float ret = order->calculatePrice() * (1 + satisfaction->calculateTip());

    return ret;
}

/**
 * @fn Waiter* Customer::getWaiter()
 * @return a waiter pointer
 * @brief The waiter member variable getter the Customer class
 * @authors Aidan Chapman (u22738917)
 */
Waiter *Customer::getWaiter()
{
    return this->waiter;
}

/**
 * @fn Order* Customer::getOrder()
 * @return an Order pointer
 * @brief The order member variable getter for the Customer class
 * @authors Douglas Porter (u21797545)
 */
Order *Customer::getOrder()
{
    return this->order;
}

/**
 * @fn Table* Customer::getTable()
 * @return a Table pointer
 * @brief The table member variable getter for the Customer class
 * @authors Douglas Porter (u21797545)
 */
Table *Customer::getTable()
{
    return this->table;
}

/**
 * @fn int Customer::getTimestamp()
 * @return an int
 * @brief The timestamp member variable getter for the Customer class
 * @authors Douglas Porter (u21797545)
 */
int Customer::getTimestamp()
{
    return this->timestamp;
}
