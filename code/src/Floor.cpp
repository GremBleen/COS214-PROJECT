/**
 * @file Floor.cpp
 * @brief Contains implementation for the Floor class
 * @authors Aidan Chapman (u22738917)
*/

#include "Floor.h"

/**
 * @fn Floor::Floor(int numTables)
 * @param numTables an integer
 * @brief Constructor of the Floor class
 * @authors Aidan Chapman (u22738917)
*/
Floor::Floor(int numTables)
{
    for(int i = 0; i < numTables; i++)
    {
        this->tables.push_back(new Table());
    }
}

/**
 * @fn Floor::~Floor()
 * @brief Destructor of the Floor class
 * @authors Aidan Chapman (u22738917)
*/
Floor::~Floor()
{
    for(vector<Table*>::iterator it = tables.begin(); it != tables.end(); ++it)
    {
        delete (*it);
    }
}

/**
 * @fn void Floor::seatCustomer(Customer* customer)
 * @param customer a Customer pointer
 * @brief A member function of the Floor class, finding an available table for the customer to sit at
 * @authors Aidan Chapman (u22738917)
*/
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
    seatCustomer(customer);
}

/**
 * @fn void Floor::setRestaurant(Restaurant* restaurant)
 * @param restaurant a Restaurant pointer
 * @brief Member function of the Floor class, allowing for the setting of the Restaurant in the context of the Mediator pattern
 * @authors Aidan Chapman (u22738917)
*/
void Floor::setRestaurant(Restaurant* restaurant)
{
    this->restaurant = restaurant;
}

/**
 * @fn int Floor::getNumTables()
 * @return an integer
 * @brief A member function of the Floor class, returning the number of tables
 * @authors Aidan Chapman (u22738917)
*/
int Floor::getNumTables()
{
    return this->tables.size();
}

/**
 * @fn Table* Floor::getTable(Customer* customer)
 * @param customer a Customer pointer
 * @return a Table pointer
 * @brief A member function of the Floor class, returns the table that a customer is at. Returns nullptr if no customer is found at any table.
 * @authors Aidan Chapman (u22738917)
*/
Table* Floor::getTable(Customer* customer)
{
    for(vector<Table*>::iterator it = tables.begin(); it != tables.end(); ++it)
    {
        if((*it)->getCustomer() == customer)
        {
            return (*it);
        }
    }
    return nullptr;
}