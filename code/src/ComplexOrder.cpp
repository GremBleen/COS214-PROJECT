/**
 * @file ComplexOrder.cpp
 * @brief Contains the implementation for the ComplexOrder class
 * 
 * This file contains the implementation for the ComplexOrder class, which is a concrete implementation of the Order abstract class.
 * The ComplexOrder class represents a complex order that can contain multiple orders, including other complex orders.
 * 
 * @author 
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
 * - Sange Tshakumane (u21479748)
 */

#include "ComplexOrder.h"
#include <list>
using namespace std;

/**
 * @fn ComplexOrder::ComplexOrder(Waiter* waiter)
 * @brief Constructor for the ComplexOrder class.
 * 
 * This constructor takes in a Waiter pointer to initialise the Order's Waiter member variable.
 * 
 * @param waiter A Waiter pointer representing the waiter who took the order.
 */
ComplexOrder::ComplexOrder(Waiter* waiter) : Order(waiter)
{
    this->item = nullptr;
    this->nextOrderItem = nullptr;
}

/**
 * @fn ComplexOrder::~ComplexOrder()
 * @brief Destructor for the ComplexOrder class.
 * 
 * This destructor frees up memory allocated to the ComplexOrder object.
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
 * @fn void ComplexOrder::addToOrder(Order* item)
 * @brief Adds an Order object to the ComplexOrder.
 * 
 * This method adds an Order object to the ComplexOrder. If the ComplexOrder already contains an Order object, it creates a new ComplexOrder object and adds the existing Order object and the new Order object to it.
 * 
 * @param item An Order pointer representing the Order object to be added to the ComplexOrder.
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
 * @fn void ComplexOrder::appendToOrder(Order* orderItem)
 * @brief Appends an Order object to the end of the ComplexOrder.
 * 
 * This method appends an Order object to the end of the ComplexOrder. If the ComplexOrder already contains an Order object, it recursively calls itself on the nextOrderItem pointer until it reaches the end of the ComplexOrder.
 * 
 * @param orderItem An Order pointer representing the Order object to be appended to the ComplexOrder.
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
 * @fn float ComplexOrder::calculatePrice()
 * @brief Calculates the total price of the ComplexOrder.
 * 
 * This method calculates the total price of the ComplexOrder by recursively calling itself on the nextOrderItem pointer until it reaches the end of the ComplexOrder. It then adds the price of the current Order object to the total price.
 * 
 * @return A float representing the total price of the ComplexOrder.
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
