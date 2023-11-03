#include "Waiter.h"

Waiter::Waiter()
{

}

Waiter::~Waiter()
{
    // Should not be linked to a customer when destructed
}

void Waiter::visitCustomer(Customer* customer)
{

}

void Waiter::takeOrder()
{
    this->restaurant->placeOrder();
}

void Waiter::serveCustomer(Order* order)
{
    
}