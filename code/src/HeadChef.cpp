#include "HeadChef.h"


HeadChef::HeadChef()
{

}

HeadChef::~HeadChef()
{

}

void HeadChef::preparePart(string order, Order* o)
{
    o->getWaiter()->serveCustomer(o);
}