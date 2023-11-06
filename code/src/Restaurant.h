/**
 * @file Restaurant.h
 * @brief Contains declaration for the Restaurant class
 * 
 * Restaurant class is the mediator class of the program. It contains the floor and kitchen
 * and is responsible for seating customers, placing orders, and handling the flow of the program.
 * 
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
        void cleanUp(Customer* customer);
    private:
        Floor* floor; /** < A Floor pointer*/
        Kitchen* kitchen; /** < A Kitchen Pointer */
        vector<Waiter*> waiters; /** < A vector of Waiter pointers */
};

#endif