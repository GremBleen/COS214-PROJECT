/**
 * @file Restaurant.h
 * @brief Contains declaration for the Restaurant class
 * @authors Aidan Chapman (u22738917)
*/

#include "Floor.h"
#include "Kitchen.h"
#include "Waiter.h"

#include <string>
#include <vector>

using namespace std;

#ifndef RESTAURANT_H
#define RESTAURANT_H

class Restaurant{
    public:
        Restaurant();
        ~Restaurant();
        void seatCustomer(Customer* customer);
        void requestWaiter(Customer* customer);
        void placeOrder(string order);
        void serveNextOrder();
        void initialise();
    private:
        Floor* floor;
        Kitchen* kitchen;
        vector<Waiter*> waiters;
};

#endif