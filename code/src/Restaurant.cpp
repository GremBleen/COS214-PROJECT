/**
 * @file Restaurant.cpp
 * @brief Contains implementation for the Restaurant class
 * @authors Aidan Chapman (u22738917)
*/


#include "Restaurant.h"

Restaurant::Restaurant()
{
    this->floor = new Floor();
    this->kitchen = new Kitchen();

    // TODO : Setup chefs

}

Restaurant::~Restaurant()
{
    delete floor;
    delete kitchen;
}

void Restaurant::seatCustomer(Customer* customer)
{

}

void Restaurant::requestWaiter(Customer* customer)
{

}

void Restaurant::placeOrder(string order)
{

}

void Restaurant::initialise()
{
    this->kitchen->setRestaurant(this);
    this->floor->setRestaurant(this);
}
