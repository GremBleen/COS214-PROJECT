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

Kitchen::~Kitchen()
{
    Chef* ptr = this->chef;
    while(ptr != nullptr)
    {
        Chef* next = ptr->nextChef;
        delete ptr;
        ptr = next;
    }
}

void Kitchen::receiveOrder(string order)
{
    this->orderQueue.push_back(order);
}

Order* Kitchen::makeNextOrder()
{
    string temp = orderQueue[0];
    orderQueue.erase(orderQueue.begin());
    this->chef->preparePart(temp, new Order());
}

void Kitchen::setRestaurant(Restaurant* restaurant)
{
    this->restaurant = restaurant;
}