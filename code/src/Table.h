/**
 * @file Table.h
 * @brief Contains declaration for the Table class
 * @authors Aidan Chapman (u22738917)
*/

using namespace std;

#ifndef TABLE_H
#define TABLE_H

class Customer;

class Table{
    public:
        Table();
        ~Table();
        void addCustomer(Customer* customer);
        Customer* getCustomer();
        void cleanUp();
    private:
        Customer* customer;
};

#endif