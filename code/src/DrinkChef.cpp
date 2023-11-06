/**
 * @file DrinkChef.cpp
 * @brief Contains implementation for the DrinkChef class
 * @authors Aidan Chapman (u22738917)
*/

#include "DrinkChef.h"
#include "Customer.h"
#include "OrderContainer.h"
#include "ComplexOrder.h"

/**
 * @fn DrinkChef::DrinkChef()
 * @brief Constructor of the DrinkChef class
 * @authors Aidan Chapman (u22738917)
*/
DrinkChef::DrinkChef()
{

}

/**
 * @fn DrinkChef::~DrinkChef()
 * @brief Destructor of the DrinkChef class
 * @authors Aidan Chapman (u22738917)
*/
DrinkChef::~DrinkChef()
{

}

/**
 * @fn void DrinkChef::preparePart(string order, Order* o)
 * @param order a string
 * @param o an Order pointer
 * @brief Member function of the DrinkChef class, implementing Chain of Responsibility functionality
 * @authors Aidan Chapman (u22738917)
*/
void DrinkChef::preparePart(string order, Order* o)
{
    int temp = request(order);
    if(temp == beer || temp == water || temp == soda)
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
        Order* obj = new ComplexOrder(w);
        w->takeOrder(new OrderContainer(w->getCustomer()->getOrderRequest(), obj));        
        w->getRestaurant()->makeNextOrder();
    }
    else
    {
        nextChef->preparePart(order, o);
    }
}