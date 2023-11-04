/**
 * @file HeadChef.cpp
 * @brief Contains implementation for the HeadChef class
 * @authors Aidan Chapman (u22738917)
*/

#include "HeadChef.h"

/**
 * @fn HeadChef::HeadChef()
 * @brief Constructor of the HeadChef class
 * @authors Aidan Chapman (u22738917)
*/
HeadChef::HeadChef()
{

}

/**
 * @fn HeadChef::~HeadChef()
 * @brief Destructor of the HeadChef class
 * @authors Aidan Chapman (u22738917)
*/
HeadChef::~HeadChef()
{

}

/**
 * @fn void HeadChef::(string order, Order* o)
 * @param order a string
 * @param o an Order pointer
 * @brief A member function of the HeadChef class, implementing Chain of responsibility functionality
 * @authors Aidan Chapman (u22738917)
*/
void HeadChef::preparePart(string order, Order* o)
{
    o->getWaiter()->serveCustomer(o);
}