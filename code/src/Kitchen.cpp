/**
 * @file Kitchen.cpp
 * @brief Contains implementation for the Kitchen class
 * @authors Aidan Chapman (u22738917)
*/

#include "Kitchen.h"

#include "MainChef.h"
#include "SideChef.h"
#include "DrinkChef.h"
#include "HeadChef.h"
#include "OrderContainer.h"

/**
 * @fn Kitchen::Kitchen()
 * @brief Constructor of the Kitchen class
 * @authors Aidan Chapman (u22738917)
*/
Kitchen::Kitchen()
{
    this->chef = new MainChef();
    Chef* ptr = this->chef;
    ptr->nextChef = new SideChef();
    ptr = ptr->nextChef;
    ptr->nextChef = new DrinkChef();
    ptr = ptr->nextChef;
    ptr->nextChef = new HeadChef();
}

/**
 * @fn Kitchen::Kitchen()
 * @brief Destructor of the Kitchen class
 * @authors Aidan Chapman (u22738917)
*/
Kitchen::~Kitchen()
{
    if(this->chef != nullptr)
    {
        delete this->chef;
        this->chef = nullptr;
    }
}

/**
 * @fn void Kitchen::receiveOrder(string order)
 * @param orderContainer an OrderContainer pointer
 * @brief A member function of the Kitchen class, adds order specified in parameter to the orderQueue member variable
 * @authors Aidan Chapman (u22738917)
*/
void Kitchen::receiveOrder(OrderContainer* orderContainer)
{
    this->orderQueue.push_back(orderContainer);
}

/**
 * @fn void Kitchen::makeNextOrder()
 * @brief Member function of the Kitchen class, pops the next order from the queue and sends it to the chefs for preparation
 * @authors Aidan Chapman (u22738917)
*/
void Kitchen::makeNextOrder()
{
    if (!orderQueue.empty()) {
        OrderContainer* temp = orderQueue[0];
        orderQueue.erase(orderQueue.begin());
        this->chef->preparePart(temp->getRequestedOrder(), temp->getOrder());
        delete temp;
    }
}

/**
 * @fn void Kitchen::setRestaurant(Restaurant* restaurant)
 * @param restaurant a Restaurant pointer
 * @brief Member variable of the Kitchen class, setting the Restaurant member variable for use with the mediator pattern
 * @authors Aidan Chapman (u22738917)
*/
void Kitchen::setRestaurant(Restaurant* restaurant)
{
    this->restaurant = restaurant;
}