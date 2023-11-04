/**
 * @file Neutral.h
 * @brief Contains declaration for the Neutral class
 * @authors Aidan Chapman (u22738917), Sange Tshakumane (u21479748)
*/

#include "Rating.h"

using namespace std;

#ifndef NEUTRAL_H
#define NEUTRAL_H

class Neutral : public Rating
{
    public:
        Neutral();
        ~Neutral();
        float calculateTip();
        void changeState(Customer* customer);
        string getRating();
};

#endif