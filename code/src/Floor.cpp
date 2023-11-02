#include "Floor.h"

Floor::Floor(int numTables)
{
    for(int i = 0; i < numTables; i++)
    {
        this->tables.push_back(new Table());
    }
}

Floor::~Floor()
{
    for(vector<Table*>::iterator it = tables.begin(); it != tables.end(); ++it)
    {
        delete (*it);
    }
}

void Floor::seatCustomer(Customer* customer)
{
    for(vector<Table*>::iterator it = tables.begin(); it != tables.end(); ++it)
    {
        if((*it)->getCustomer() == nullptr)
        {
            (*it)->addCustomer(customer);
            return;
        }
    }
    seatCustomer(customer); // Will loop recursively until the customer can get a seat
}

void Floor::setRestaurant(Restaurant* restaurant)
{
    this->restaurant = restaurant;
}