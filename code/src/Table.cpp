#include "Table.h"

#include "Customer.h"

Table::Table()
{

}

Table::~Table()
{
    // do not delete customer in here. Customers should leave before cleanup of tables ect.
    // Call cleanUp() when the customer leaves.
}

void Table::addCustomer(Customer* customer)
{
    this->customer = customer;
}

Customer* Table::getCustomer()
{
    return this->customer;
}

void Table::cleanUp()
{
    delete customer;
    customer = nullptr;
}