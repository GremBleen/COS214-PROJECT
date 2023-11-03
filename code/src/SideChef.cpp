#include "SideChef.h"

SideChef::SideChef()
{

}

SideChef::~SideChef()
{

}

void SideChef::preparePart(string order, Order* o)
{
    int temp = request(order);
    if(temp == chips || temp == salad)
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
        w->takeOrder();
    }
    else
    {
        nextChef->preparePart(order, 0);
    }
}