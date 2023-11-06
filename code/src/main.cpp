/**
 * @file main.cpp
 * @brief This is the file that the user will interact with
 * @authors Aidan Chapman (u22738917)
*/
#include <iostream>

#include "Interface.h"

#include "UnitTesting.hpp"

using namespace std;

void run();

/**
 * @fn int main
 * @brief A function used to run the program
 * @authors Aidan Chapman (u22738917)
*/
int main()
{
    // run();
    test();

    return 0;
}

void run()
{
    Interface* interface = new Interface();

    float total = 0;
    char cont;
    do
    {
        float dailyTotal = 0;
        int num = interface->generateNumberOfCustomers();
        for(int i = 0; i < num; i++)
        {
            float num = interface->runCustomer();
            cout << "Customer was served and paid R" << num << endl;
            dailyTotal += num;
        }
        total += dailyTotal;
        cout << "Number of Customers: " << num << endl << "Total for the day: R" << dailyTotal << endl << "Total: R" << total << endl << "Continue to next day [y]:";
        cin >> cont;
        cout << endl;
    } while (cont == 'Y' || cont == 'y');

    delete interface;  
}