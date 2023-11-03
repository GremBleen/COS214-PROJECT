#include "Interface.h"
#include "Customer.h"
#include <cstdlib>
#include <ctime>

Interface::Interface()
{
    srand(static_cast<unsigned>(time(0))); // Seed the random number generator
}

Interface::~Interface()
{
    // Perform any cleanup, if needed
}

Customer *Interface::createCustomer()
{
    // Create a new Customer instance
    Customer *newCustomer = new Customer();

    // Set the time to the current time
    // For simplicity, we use the current system time here
    newCustomer->setTime(time(0));

    // Generate a random patience value for the customer (adjust range as needed)
    int minPatience = 10;
    int maxPatience = 60;
    int randomPatience = minPatience + (rand() % (maxPatience - minPatience + 1));

    newCustomer->setPatience(randomPatience);

    return newCustomer;
}
