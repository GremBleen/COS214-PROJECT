/**
 * @file Neutral.h
 * @brief Contains declaration for the Neutral class
 * 
 * Neutral is a derived class of Rating, representing a neutral rating.
 * Neutral ratings do not affect the tip.
 * 
 * @authors
 * - Aidan Chapman (u22738917) 
 * - Sange Tshakumane (u21479748)
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