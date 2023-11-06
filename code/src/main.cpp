/**
 * @file main.cpp
 * @brief This is the file that the user will interact with
 * @authors Aidan Chapman (u22738917)
*/
#include <iostream>

#include "Interface.h"

using namespace std;

/**
 * @fn int main
 * @brief A function used to run the program
 * @authors Aidan Chapman (u22738917)
*/
int main()
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

    return 0;
}