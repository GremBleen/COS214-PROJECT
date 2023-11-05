#include "Waiter.h"
/*
 * Defualt Constructor
*/
Waiter::Waiter()//sudgest We Use the next Constructor Instead
{

}

Waiter::Waiter(Restaurant* res)
{
    this->customer = nullptr;
    this->restaurant = res;
}

Waiter::~Waiter()
{
    cout<<"Waiter has gone home for the day"<<endl;
}

void Waiter::takeOrder(Customer* customer)
{
    this->customer = customer;
    this->customer->getOrderRequest();

}

void Waiter::serveCustomer(Order* order)
{
    this->customer->reciveOrder(order);
    
}
void Waiter::cleanUp(){
    cout<<"Costomer's have paid"<<endl;
    //this->customer->getTable()
}