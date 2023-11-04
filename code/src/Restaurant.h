/**
 * @file Restaurant.h
 * @brief Contains declaration for the Restaurant class
 * @authors Aidan Chapman (u22738917)
*/

#include <string>
#include <vector>

using namespace std;

#ifndef RESTAURANT_H
#define RESTAURANT_H

class Waiter;
class Floor;
class Kitchen;
class Customer;
class OrderContainer;
class Restaurant{
    public:
        Restaurant(int numTables);
        ~Restaurant();
        void seatCustomer(Customer* customer);
        void placeOrder(OrderContainer* orderContainer);
        void makeNextOrder();
        void initialise();
    private:
        Floor* floor;
        Kitchen* kitchen;
        vector<Waiter*> waiters;
};

#endif