/**
 * @file SideChef.cpp
 * @brief Contains implementation for the SideChef class
 * @authors Aidan Chapman (u22738917)
*/

#include "SideChef.h"
#include "Customer.h"
#include "OrderContainer.h"

/**
 * @fn SideChef::SideChef()
 * @brief Constructor of the SideChef class
 * @authors Aidan Chapman (u22738917)
*/
SideChef::SideChef()
{

}

/**
 * @fn SideChef::~SideChef()
 * @brief Destructor of the SideChef class
 * @authors Aidan Chapman (u22738917)
*/
SideChef::~SideChef()
{

}

/**
 * @fn void SideChef::preparePart(string order, Order* o)
 * @param order a string
 * @param o an Order pointer
 * @brief The Chain of responsibility handle() method
 * @authors Aidan Chapman (u22738917)
*/
void SideChef::preparePart(string order, Order* o)
{
    int temp = request(order);
    if(temp == chips || temp == salad)
    {
        builders[temp]->prepareIngredients();
        builders[temp]->assembleItem();
        Order* i = builders[temp]->getItem();
        o->addToOrder(i);
        this->preparePart(order, o);
    }
    else if(temp == -1)
    {
        Waiter* w = o->getWaiter();
        delete o;
        w->takeOrder(new OrderContainer(w->getCustomer()->getOrderRequest(), new Order(w)));
        w->getRestaurant()->makeNextOrder();
    }
    else
    {
        nextChef->preparePart(order, 0);
    }
}