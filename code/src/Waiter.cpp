/**
 * @file Waiter.cpp
 * @brief Contains implementation for the Waiter class
 * @authors Aidan Chapman (u22738917)
*/

#include "Waiter.h"

#include "Customer.h"
#include "Order.h"

/**
 * @fn Waiter::Waiter(Restaurant* restaurant)
 * @param restaurant a Restaurant pointer
 * @brief Constructor for the Waiter Class
 * @authors Aidan Chapman (u22738917)
*/
Waiter::Waiter(Restaurant* restaurant)
{
    this->restaurant = restaurant;
}

Waiter::~Waiter()
{
    // Should not be linked to a customer when destructed
}

void Waiter::visitCustomer(Customer* customer) // notify
{
    // TODO : implement
}

/**
 * @fn void Waiter::takeOrder(string order)
 * @param order a string
 * @brief A member function of the Waiter Class. Used to take the customer's order
 * @authors Aidan Chapman (u22738917)
*/
void Waiter::takeOrder(string order)
{
    this->restaurant->placeOrder(order);
}

/**
 * @fn void Waiter::serveCustomer(Order* order)
 * @param order an Order pointer
 * @brief A member function of the Waiter Class. Calls the customer's receiveOrder(Order* order) function
 * @authors Aidan Chapman (u22738917)
*/
void Waiter::serveCustomer(Order* order)
{
    this->customer->receiveOrder(order);
}

/**
 * @fn Customer* Waiter::getCustomer()
 * @return customer reference
 * @brief A member function of the Waiter class. A getter for the Customer member variable
 * @authors Aidan Chapman (u22738917)
*/
Customer* Waiter::getCustomer()
{
    return this->customer;
}

void Waiter::cleanUp()
{
    this->customer = nullptr;
}