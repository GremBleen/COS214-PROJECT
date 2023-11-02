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
}

Restaurant::~Restaurant()
{
    delete floor;
    delete kitchen();
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
