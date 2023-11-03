/**
 * @file Neutral.h
 * @brief Contains declaration for the Neutral class
 * @authors Aidan Chapman (u22738917)
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
};

#endif