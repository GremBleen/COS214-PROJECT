/**
 * @file Restaurant.cpp
 * @brief Contains implementation for the Restaurant class
 * @authors Aidan Chapman (u22738917)
*/

#include "Restaurant.h"

#include "Waiter.h"
#include "Floor.h"
#include "Kitchen.h"
#include "Customer.h"
#include "OrderContainer.h"

/**
 * @fn Restaurant::Restaurant(int numTables)
 * @param numTables an int
 * @brief Constructor of the Restaurant class
 * @authors Aidan Chapman (u22738917)
*/
Restaurant::Restaurant(int numTables)
{
    this->floor = new Floor(numTables);
    this->kitchen = new Kitchen();
}

/**
 * @fn Restaurant::~Restaurant()
 * @brief Destructor of the Restaurant class
 * @authors Aidan Chapman (u22738917)
*/
Restaurant::~Restaurant()
{
    delete floor;
    delete kitchen;
}

/**
 * @fn void Restaurant::seatCustomer(Customer* customer)
 * @param customer a Customer pointer
 * @brief implements the functionality to seat a customer, link a Waiter observer to the customer and take the customer's order
 * @authors Aidan Chapman (u22738917)
*/
void Restaurant::seatCustomer(Customer* customer)
{
    this->floor->seatCustomer(customer);

    Waiter* thisWaiter = nullptr;

    vector<Waiter*>::iterator it = waiters.begin();
    while(it != waiters.end())
    {
        if((*it)->getCustomer() != nullptr)
        {
            thisWaiter = *it;
            break;
        }
        it++;
    }

    customer->acceptWaiter(thisWaiter); // customer -> attach(Waiter)
    thisWaiter->takeOrder(new OrderContainer(customer->getOrderRequest(), new Order(thisWaiter)));
    // this->kitchen->makeNextOrder(); 
}

/**
 * @fn void Restaurant::makenextOrder()
 * @brief A method used to call Kitchen's makeNextOrder() method
 * @authors Aidan Chapman (u22738917)
*/
void Restaurant::makeNextOrder()
{
    this->kitchen->makeNextOrder();
}

/**
 * @fn void Restaurant::placeOrder(OrderContainer* order)
 * @param orderContainer an OrderContainer pointer
 * @brief A method used to send the order to the kitchen
 * @authors Aidan Chapman (u22738917)
*/
void Restaurant::placeOrder(OrderContainer* orderContainer)
{
    this->kitchen->receiveOrder(orderContainer);
}

/**
 * @fn void Restaurant::initialise()
 * @brief A function to be called directly after the constructor for Restaurant has been called in order to link all member variables properly
 * @authors Aidan Chapman (u22738917)
*/
void Restaurant::initialise()
{
    this->kitchen->setRestaurant(this);
    this->floor->setRestaurant(this);

    for(int i = 0; i < floor->getNumTables(); i++)
    {
        this->waiters.push_back(new Waiter(this));
    }
}
