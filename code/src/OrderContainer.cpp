/**
 * @file OrderContainer.cpp 
 * @brief Contains implementation for the OrderContainer class.
 * 
 * @authors Aidan Chapman (u22738917)
 */
#include "OrderContainer.h"

/**
 * @fn OrderContainer::OrderContainer(string o, Order* order)
 * @brief Constructs an OrderContainer object with the given string and Order pointer.
 * 
 * @param o The string to be set as the order container's identifier.
 * @param order The Order pointer to be stored in the container.
 */
OrderContainer::OrderContainer(string o, Order* order)
{
    this->o = o;
    this->order = order;
}

/**
 * @fn OrderContainer::~OrderContainer()
 * @brief Destructor for the OrderContainer class.
 * 
 */
OrderContainer::~OrderContainer()
{

}

/**
 * @fn Order* OrderContainer::getOrder()
 * @brief Returns the Order pointer stored in the container.
 * 
 * @return An Order pointer representing the Order object stored in the container.
 */
Order* OrderContainer::getOrder()
{
    return this->order;
}

/**
 * @fn string OrderContainer::getRequestedOrder()
 * @brief Returns the string stored in the container.
 * 
 * @return A string representing the string stored in the container.
 */
string OrderContainer::getRequestedOrder()
{
    return this->o;
}