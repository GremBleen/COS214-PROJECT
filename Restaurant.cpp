#include "Restaurant.h"
#include "Customer.h" // Include the Customer class
#include "Order.h"    // Include the Order class if needed
#include "Waiter.h"

Restaurant::Restaurant() : waiters() // initialize vector with its default constructor
{
    // Initialize the floor, kitchen, and other components as needed
    floor = new Floor();
    kitchen = new Kitchen();
}

void Restaurant::seatCustomer(Customer *customer)
{
    // Check if there are available tables
    // for now we just have the hasCustomer function as placeholder
    // need logic to check if tables are available
    for (Table *table : floor->tables)
    {
        if (!table->hasCustomer())
        {
            // Seat the customer at the table
            table->addCustomer(customer);
            std::cout << "Customer " << customer << " has been seated at Table " << table << std::endl;
            return; // Exit the loop once a table is found
        }
    }

    // If no available tables are found, display a message
    std::cout << "No available tables at the moment. Please wait or come back later." << std::endl;
}

void Restaurant::requestWaiter(Customer *customer)
{
    // This logic should involve tracking waiter availability and selecting one
    // The findAvailableWaiter() is a placeholder method and we need a way to find out if
    // waiters are available or not
    Waiter *availableWaiter = findAvailableWaiter();

    if (availableWaiter)
    {
        // Assign the waiter to the customer
        availableWaiter->visitCustomer(customer);
        // Now, the waiter will take the customer's order
        availableWaiter->takeOrder();
    }
    else
    {
        // Handle the case when there are no available waiters
        std::cout << "No available waiters at the moment. Please be patient." << std::endl;
    }
}

void Restaurant::placeOrder(const std::string order)
{
    // Create an order and add it to the kitchen's order queue
    kitchen->receiveOrder(order);
    std::cout << "Placing order: " << order << std::endl;
}

void Restaurant::serveNextOrder()
{
    // Prepare and serve the next order from the kitchen
    std::string nextOrder = kitchen->makeNextOrder();
    if (!nextOrder.empty())
    {
        std::cout << "Serving order: " << nextOrder << std::endl;
    }
    else
    {
        std::cout << "No orders to serve." << std::endl;
    }
}
