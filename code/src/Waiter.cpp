/**
 * @file Waiter.cpp
 * @brief Contains implementation for the Waiter class
 * @authors Aidan Chapman (u22738917)
*/

#include "Waiter.h"

#include "Customer.h"

Waiter::Waiter(Restaurant* restaurant)
{
    this->restaurant = restaurant;
}

Waiter::~Waiter()
{
    // Should not be linked to a customer when destructed
}

void Waiter::visitCustomer(Customer* customer)
{

}

void Waiter::takeOrder()
{
    this->restaurant->placeOrder();
}

void Waiter::serveCustomer(Order* order)
{
    this->customer->receiveOrder(order);
}