/**
 * @file ComplexOrder.cpp
 * @brief Contains implementation for the ComplexOrder class
 * @authors Sange Tshakumane (u21479748)
*/

#include "ComplexOrder.h"
#include <list>
using namespace std;

/**
 * @fn ComplexOrder::ComplexOrder(Waiter* waiter)
 * @param waiter a Waiter pointer
 * @brief Constructor for the ComplexOrder class. Takes in a Waiter pointer to initialise Order's Waiter member variable
*/
ComplexOrder::ComplexOrder(Waiter* waiter) : Order(waiter)
{
    this->item = nullptr;
    this->nextOrderItem = nullptr;
}

/**
 * Destructor for the ComplexOrder class
*/
ComplexOrder::~ComplexOrder()
{
    if(this->item != nullptr)
    {
        delete this->item;
        this->item = nullptr;
    }
    if(this->nextOrderItem != nullptr)
    {
        delete this->nextOrderItem;
        this->nextOrderItem = nullptr;
    }
}

/**
 * Function for adding a new item to the customer's total order
*/
void ComplexOrder::addToOrder(Order* item)
{
    if(this->item == nullptr)
    {
        this->item = item;
    }
    else
    {
        Order* obj = new ComplexOrder(this->getWaiter());
        obj->addToOrder(item);
        this->appendToOrder(obj);
    }
}

/**
 * Function for adding a new item to the customer's total order
*/
void ComplexOrder::appendToOrder(Order* orderItem)
{
    if(this->nextOrderItem == nullptr)
    {
        this->nextOrderItem = orderItem;
    }
    else
    {
        this->nextOrderItem->appendToOrder(orderItem);
    }
}

/**
 * Function for calculating the price of the order in full with all items in the order taken into account
*/
float ComplexOrder::calculatePrice() {
    float total = 0.0F;

    if(this->nextOrderItem != nullptr)
    {
        total = this->nextOrderItem->calculatePrice();
    }

    total += this->item->calculatePrice();

    return total;
}