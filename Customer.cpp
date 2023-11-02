#include "Customer.h"
#include "Waiter.h"
#include "Rating.h"
#include "Order.h"
#include <iostream>

Customer::Customer()
{
    waiter = nullptr;       // Initialize the waiter to nullptr
    satisfaction = nullptr; // Initialize the satisfaction to nullptr
    currentTime = 0;        // Initialize the time to 0
    patience = 0;           // Initialize patience to 0
}

Customer::~Customer()
{
    // Perform any cleanup, such as deleting dynamic objects if needed
    if (waiter)
    {
        delete waiter;
    }
    if (satisfaction)
    {
        delete satisfaction;
    }
}

void Customer::setTime(time_t currentTime)
{
    this->currentTime = currentTime;
}

void Customer::setPatience(int patience)
{
    this->patience = patience;
}

time_t Customer::getTime() const
{
    return currentTime;
}

int Customer::getPatience() const
{
    return patience;
}

void Customer::acceptWaiter(Waiter *waiter)
{
    this->waiter = waiter;
    std::cout << "Customer accepts:"
              << "waiter->getName() if method is there" << std::endl;
    // assuming the passed in waiter has properties we need to use e.g get their name
    // we can add more logic if needed.
}

void Customer::changeRating(Rating *rating)
{
    // Check the current rating state of the customer
    if (satisfaction) // declared in the .h file for customer
    {
        if (satisfaction->calculateTip() == 0)
        {
            // The customer is in the Unhappy state
            std::cout << "Customer is already Unhappy." << std::endl;
        }
        else if (satisfaction->calculateTip() > 0)
        {
            // The customer is in the Satisfied state
            std::cout << "Customer is already Satisfied." << std::endl;
        }
        else
        {
            // The customer is in the Neutral state
            std::cout << "Customer is in the Neutral state." << std::endl;
        }
    }
    else
    {
        // The customer doesn't have a rating yet, set it to the new rating
        satisfaction = rating;
        std::cout << "Customer's rating has been changed." << std::endl;
    }
}

void Customer::receiveOrder(Order *order)
{
    std::cout << "Customer " << this << " receives an order." << std::endl;

    // Check the type of the order
    if (dynamic_cast<Item *>(order))
    {
        // It's a single item order
        Item *itemOrder = dynamic_cast<Item *>(order);
        std::cout << "Customer " << this << " receives a single item order: " << itemOrder->getName() << std::endl;
    }
    else if (dynamic_cast<ComplexOrder *>(order))
    {
        // It's a complex order
        ComplexOrder *complexOrder = dynamic_cast<ComplexOrder *>(order);
        std::cout << "Customer " << this << " receives a complex order." << std::endl;

        // Process the complex order, if needed
    }
    else
    {
        std::cout << "Invalid order type." << std::endl;
    }

    // Implement logic to handle the order, update the customer's state, etc.
}

float Customer::calculatePayment(Order *order)
{
    // Simulate the customer calculating the payment
    // we need to interact with the order object/pointer and call a method that calculates
    std::cout << "Customer calculates payment for the order as:"
              << order->calculatePrice() << std::endl; // from the Order class
    return 0.0;
}
