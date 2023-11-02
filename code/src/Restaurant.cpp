/**
 * @file Restaurant.cpp
 * @brief Contains implementation for the Restaurant class
 * @authors Aidan Chapman (u22738917)
*/


#include "Restaurant.h"

Restaurant::Restaurant(int numTables)
{
    this->floor = new Floor(numTables);
    this->kitchen = new Kitchen();
}

Restaurant::~Restaurant()
{
    delete floor;
    delete kitchen;
}

void Restaurant::seatCustomer(Customer* customer)
{
    this->floor->seatCustomer(customer);
}

void Restaurant::requestWaiter(Customer* customer)
{
    
}

void Restaurant::placeOrder(string order)
{
    this->kitchen->receiveOrder(order);
}

void Restaurant::initialise()
{
    this->kitchen->setRestaurant(this);
    this->floor->setRestaurant(this);
    
    for(int i = 0; i < 8; i++)
    {
        this->waiters.push_back(new Waiter());
    }
}
