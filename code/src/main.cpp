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
        int num = interface.generateNumberOfCustomers();
        for(int i = 0; i < num; i++)
        {
            dailyTotal += interface.runCustomer();
        }
        total += dailyTotal;
        cout << "Total for the day: R" << dailyTotal << endl << "Total: R" << total << endl << "Continue to next day [y]:";
        cin >> cont;
        cout << endl;
    } while (cont == 'Y' || cont == 'y');
    

    return 0;
}