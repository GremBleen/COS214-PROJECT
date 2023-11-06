/**
 * @file Table.h
 * @brief Contains declaration for the Table class
 * 
 * The Table class is used to represent a table in the restaurant. It contains a pointer to a Customer object,
 * which is used to represent the customer sitting at the table.
 * 
 * @authors Aidan Chapman (u22738917)
*/

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
        Customer* customer; ///< Pointer to a Customer object
};

#endif