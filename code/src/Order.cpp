/**
 * @file Order.cpp
 * @brief Contains implementation for the Order class
 * @authors Sange Tshakumane (u21479748)
*/

#include "Order.h"
using namespace std;

/**
 * @fn Order::Order()
 * @brief Default constructor for the Order class.
 * 
 */
Order::Order()
{

}

/**
 * @fn Order::Order(Waiter* waiter)
 * @brief Constructor for the Order class.
 * 
 * @param waiter The waiter that is attached to the order.
 */
Order::Order(Waiter* waiter) {
    this->waiter = waiter;
}

/**
 * @fn Order::~Order()
 * @brief Destructor for the Order class.
 * 
 */
Order::~Order()
{
    
}

/**
 * @fn Order::addToOrder(Order* item)
 * @brief Adds an Order object to the order.
 * 
 * @param item An Order pointer representing the Order object to be added to the order.
 */
void Order::addToOrder(Order* item)
{

}

/**
 * @fn Order::appendToOrder(Order* order)
 * @brief Appends an Order object to the order.
 * 
 * @param order An Order pointer representing the Order object to be appended to the order.
 */
void Order::appendToOrder(Order* order)
{

}

/**
 * @fn Order::calculatePrice()
 * @brief Calculates the price of the order.
 * 
 * @return float The price of the order.
 */
float Order::calculatePrice()
{
    return 0.0F;
}

/**
 * @fn Order::getWaiter()
 * @brief Gets the waiter that is attached to the order.
 * 
 * @return Waiter* A pointer to the waiter that is attached to the order.
 */
Waiter* Order::getWaiter() {
    return waiter;
}