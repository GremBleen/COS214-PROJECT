/**
 * @file Unhappy.h
 * @brief Contains declaration for the Unhappy class
 * 
 * Unhappy is a derived class of Rating. It is one of the states of the State Pattern.
 * It is used to represent a customer who is unhappy with the service they received.
 * Unhappy customers do not tip.
 * 
 * @authors 
 * - Aidan Chapman (u22738917)
 * - Sange Tshakumane (u21479748)
*/

#include "Rating.h"

using namespace std;

#ifndef UNHAPPY_H
#define UNHAPPY_H

class Unhappy : public Rating
{
    public:
        Unhappy();
        ~Unhappy();
        float calculateTip();
        void changeState(Customer* customer);
        string getRating();
};

#endif