/**
 * @file Floor.h
 * @brief Contains declaration for the Floor class
 * @authors Aidan Chapman (u22738917)
*/

#include "Customer.h"
#include "Table.h"

#include <vector>

using namespace std;

#ifndef FLOOR_H
#define FLOOR_H

class Restaurant;

class Floor{
    public:
        Floor(int numTables);
        ~Floor();
        void seatCustomer(Customer* customer);
        void setRestaurant(Restaurant* restaurant);
    private:
        Restaurant* restaurant;
        vector<Table*> tables;
};

#endif