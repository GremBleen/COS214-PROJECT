#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>
#include <vector>
#include "Floor.h"
#include "Kitchen.h"
#include "Waiter.h"

using namespace std;

class Customer; // forward declaration

class Restaurant
{
private:
    Floor *floor;
    Kitchen *kitchen;
    vector<Waiter *> waiters;

    Restaurant();

public:
    void seatCustomer(Customer *customer);
    void requestWaiter(Customer *customer);
    void placeOrder(const std::string order);
    void serveNextOrder();
};

#endif
