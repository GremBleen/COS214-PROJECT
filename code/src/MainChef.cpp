/**
 * @file MainChef.cpp
 * @brief Contains implementation for the MainChef class
 * @authors Aidan Chapman (u22738917)
*/

#include "MainChef.h"
#include "Customer.h"

/**
 * @fn MainChef::MainChef()
 * @brief Constructor of the MainChef class
 * @authors Aidan Chapman (u22738917)
*/
MainChef::MainChef()
{

}

/**
 * @fn MainChef::~MainChef()
 * @brief Destructor of the MainChef class
 * @authors Aidan Chapman (u22738917)
*/
MainChef::~MainChef()
{

}

/**
 * @fn void MainChef::preparePart(string order, Order* o)
 * @param order a string
 * @param o an Order pointer
 * @brief The Chain of responsibility handle() method
 * @authors Aidan Chapman (u22738917)
*/
void MainChef::preparePart(string order, Order* o)
{
    int temp = request(order);
    if(temp == steak || temp == fish || temp == burger)
    {
        builders[temp]->prepareIngredients();
        builders[temp]->assembleItem();
        Item* i = builders[temp]->getItem();
        o->addToOrder(i);
        this->preparePart(order, o);
    }
    else if(temp == -1)
    {
        Waiter* w = o->getWaiter();
        delete o;
        w->takeOrder(w->getCustomer()->getOrderRequest());
    }
    else
    {
        nextChef->preparePart(order, 0);
    }
}