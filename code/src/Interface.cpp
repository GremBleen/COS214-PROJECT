#include "Interface.h"

Interface::Interface()
{

}

Interface::~Interface()
{

}

Customer* Interface::createCustomer()
{
    return NULL;
}

Restaurant* Interface::createRestaurant()
{
    Restaurant* restaurant = new Restaurant(8);
    restaurant->initialise();
    return restaurant;
}