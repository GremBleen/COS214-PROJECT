/**
 * @file Neutral.h
 * @brief Contains declaration for the Neutral class
 * @authors Aidan Chapman (u22738917),Kabelo CHuene(14046492)
 */

#include "Rating.h"

#ifndef NEUTRAL_H
#define NEUTRAL_H

class Neutral : public Rating
{
public:
    Neutral();
    ~Neutral();
    float calculateTip();
    void changeState(Customer *customer);
};

#endif