/**
 * @file Table.h
 * @brief Contains declaration for the Table class
 * @authors Aidan Chapman (u22738917)
*/

#include "Customer.h"

using namespace std;

#ifndef TABLE_H
#define TABLE_H

class Table{
    public:
        Table();
        ~Table();
        void addCustomer(Customer* customer);
        void cleanUp();
    private:
        Customer* customer();
};

#endif