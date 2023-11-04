/**
 * @file Satisfied.h
 * @brief Contains declaration for the Satisfied class
 * @authors Aidan Chapman (u22738917)
*/

#include "Rating.h"

#ifndef SATISFIED_H
#define SATISFIED_H

class Satisfied : public Rating
{
    public:
        Satisfied();
        ~Satisfied();
        float calculateTip();
        void changeState(Customer* customer);
};

#endif