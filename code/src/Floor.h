/**
 * @file Floor.h
 * @brief Contains declaration for the Floor class
 * 
 * Floor is a class that represents a floor in a restaurant. It contains a vector of Table pointers.
 * It also contains a pointer to a Restaurant object.
 * 
 * @authors Aidan Chapman (u22738917)
*/

#include "Customer.h"
#include "Table.h"
#include "Restaurant.h"

#include <vector>

using namespace std;

#ifndef FLOOR_H
#define FLOOR_H

class Floor{
    public:
        Floor(int numTables);
        ~Floor();
        void seatCustomer(Customer* customer);
        void setRestaurant(Restaurant* restaurant);
        int getNumTables();
        Table* getTable(Customer* customer);
    private:
        Restaurant* restaurant; ///< Restaurant object
        vector<Table*> tables; ///< Vector of Table pointers
};

#endif