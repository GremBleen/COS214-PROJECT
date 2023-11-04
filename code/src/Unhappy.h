/**
 * @file Unhappy.h
 * @brief Contains declaration for the Unhappy class
 * @authors Aidan Chapman (u22738917), Sange Tshakumane (u21479748)
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