/**
 * @file Satisfied.h
 * @brief Contains declaration for the Satisfied class
 * @authors Aidan Chapman (u22738917), Sange Tshakumane (u21479748)
*/

#include "Rating.h"

using namespace std;

#ifndef SATISFIED_H
#define SATISFIED_H

class Satisfied : public Rating
{
    public:
        Satisfied();
        ~Satisfied();
        float calculateTip();
        void changeState(Customer* customer);
        string getRating();
};

#endif