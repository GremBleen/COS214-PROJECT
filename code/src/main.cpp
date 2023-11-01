/**
 * @file main.cpp
 * @brief This is the file that the user will interact with
 * @authors Aidan Chapman (u22738917)
*/
#include <iostream>
#include <cstdlib>

#include "Interface.h"

using namespace std;

int main()
{
    Interface* interface = new Interface();

    float total = 0;
    char cont;
    do
    {
        float dailyTotal = 0;
        // generate a random number of customers for the day
        // loop through each customer
        //      Create customer (set time to current time and generate a random patience value)
        //      try and seat the customer
        //      Take the customer's order (generated randomly)
        //      Prepare order
        //      send it back to the customer
        //      get tip based on random patience value
        //      add to total
        //      clean table and make it available
        total += dailyTotal;
        cout << "Total for the day: R" << dailyTotal << endl << "Total: R" << total << endl << "Continue to next day [y]:";
        cin >> cont;
        cout << endl;
    } while (cont == 'Y' || cont == 'y');
    

    return 0;
}