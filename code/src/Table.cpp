/**
 * @file Table.cpp
 * @brief Contains implementation for the Table class
 * @authors Aidan Chapman (u22738917)
*/
#include "Table.h"

#include "Customer.h"

/**
 * @fn Table::Table()
 * @brief Constructor for the Table Class
 * @authors Aidan Chapman (u22738917)
*/
Table::Table()
{
    this->customer = nullptr;
}

/**
 * @fn Table::~Table()
 * @brief Destructor for the Table Class
 * @authors Aidan Chapman (u22738917)
*/
Table::~Table()
{
    // do not delete customer in here. Customers should leave before cleanup of tables ect.
    // Call cleanUp() when the customer leaves.
}

/**
 * @fn void Table::addCustomer()
 * @param customer A Customer pointer
 * @brief Sets the customer member variable
 * @authors Aidan Chapman (u22738917)
*/
void Table::addCustomer(Customer* customer)
{
    this->customer = customer;
}

/**
 * @fn Customer* Table::getCustomer()
 * @brief A getter for the customer member variable
 * @authors Aidan Chapman (u22738917)
*/
Customer* Table::getCustomer()
{
    return this->customer;
}

/**
 * @fn void Table::cleanUp()
 * @brief A function to be called after the customer has received their food. This is used to properly remove the customer object from the table
 * @authors Aidan Chapman (u22738917)
*/
void Table::cleanUp()
{
    customer = nullptr;
}