#include "OrderContainer.h"

OrderContainer::OrderContainer(string o, Order* order)
{
    this->o = o;
    this->order = order;
}

OrderContainer::~OrderContainer()
{

}

Order* OrderContainer::getOrder()
{
    return this->order;
}

string OrderContainer::getRequestedOrder()
{
    return this->o;
}