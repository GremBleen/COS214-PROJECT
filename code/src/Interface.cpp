/**
 * @file Interface.cpp
 * @brief Contains implementation for the Interface class
 * @authors Aidan Chapman (u22738917)
 */

#include "Interface.h"
#include "Chef.h"

#include <cstdlib> // for random numbers
#include <chrono>  // for unix timestamp
#include <ctime>   // for unix timestamp
#include <string>
#include <sstream>

/**
 * @fn Interface::Interface()
 * @brief Constructor of the Interface class
 * @authors Aidan Chapman (u22738917), Douglas Porter (u21797545)
 */
Interface::Interface()
{
    this->r = createRestaurant();
}

/**
 * @fn Interface::~Interface()
 * @brief Destructor of the Interface class
 * @authors Aidan Chapman (u22738917), Douglas Porter (u21797545)
 */
Interface::~Interface()
{
    if (this->r != nullptr)
    {
        delete this->r;
    }
}

/**
 * @fn Customer* Interface::createCustomer()
 * @return a Customer pointer
 * @brief Member function of the Interface class, Creates and returns a customer
 * @authors Aidan Chapman (u22738917), Douglas Porter (u21797545)
 */
Customer *Interface::createCustomer()
{
    Customer *customer = new Customer(getCurrentUnixTime());
    return customer;
}

/**
 * @fn Restaurant Interface::createRestaurant()
 * @return a Restaurant pointer
 * @brief Member function of the Interface class, Creates and returns a restaurant
 * @authors Aidan Chapman (u22738917), Douglas Porter (u21797545)
 */
Restaurant *Interface::createRestaurant()
{
    this->r = new Restaurant(8);
    this->r->initialise();
    return this->r;
}


//Merged Facade with Dev in order to update the interface class
/**
 * @fn int Interface::getCurrentUnixTime()
 * @return an int
 * @brief Member function of the Interface class, returns the current unix time. Dependent on system clock
 * @authors Aidan Chapman (u22738917)
 */
int Interface::getCurrentUnixTime()
{
    return static_cast<int>(chrono::system_clock::to_time_t(chrono::system_clock::now()));
}

/**
 * @fn int Interface::generateNumberOfCustomers()
 * @return an int
 * @brief Member function of the Interface class, returns a random number of customers between 1 and 10
 * @authors Aidan Chapman (u22738917)
 */
int Interface::generateNumberOfCustomers()
{
    int numCustomers = (abs(getCurrentUnixTime() * rand()) % 10) + 1;
    return numCustomers;
}

/**
 * @fn float Interface::runCustomer()
 * @return a float
 * @brief Member function of the Interface class, returns the amount that the Customer paid
 * @authors Aidan Chapman (u22738917), Douglas Porter (u21797545)
 */
float Interface::runCustomer()
{
    // create a new customer using createCustomer()
    Customer* newCustomer = createCustomer();
    // generate a new order string using generateOrderString()
    string order = generateOrderString();
    // create a new restaurant using createRestaurant()

    r->seatCustomer(newCustomer);
    r->placeOrder(order);

    //determine the customer's total (tip + order price???) and return it
    float customerPayment = newCustomer->calculatePayment() + newCustomer->getOrder()->calculatePrice();

    return customerPayment;
}

/**
 * @fn string Interface::generateOrderString()
 * @return an string
 * @brief Member function of the Interface class, returns a randomOrder string to be adapted by the chef.
 * The string is composed of at least 1 main meal.
 * There are a maximum of 6 mains, sides and drinks per order.
 * @authors Aidan Chapman (u22738917)
 */
string Interface::generateOrderString()
{
    stringstream s;
    int numMain = ((getCurrentUnixTime() * rand()) % 6) + 1;
    for (int i = 0; i < numMain; i++)
    {
        int num = ((getCurrentUnixTime() * rand()) % 3) + 1;
        switch(num)
        {
            case 1:
                s << Chef::steak;
            break;
            case 2:
                s << Chef::burger;
            break;
            case 3:
                s << Chef::fish;
            break;
        }
    }

    int numSide = ((getCurrentUnixTime() * rand()) % 7);
    for (int i = 0; i < numSide; i++)
    {
        int num = ((getCurrentUnixTime() * rand()) % 2) + 1;
        switch(num)
        {
            case 1:
                s << Chef::chips;
            break;
            case 2:
                s << Chef::salad;
            break;
        }
    }

    int numDrink = ((getCurrentUnixTime() * rand()) % 7);
    for (int i = 0; i < numDrink; i++)
    {
        int num = ((getCurrentUnixTime() * rand()) % 3) + 1;
        switch(num)
        {
            case 1:
                s << Chef::beer;
            break;
            case 2:
                s << Chef::water;
            break;
            case 3:
                s << Chef::soda;
            break;
        }
    }
    return s.str();
}
