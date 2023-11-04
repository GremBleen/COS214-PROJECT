/**
 * @file Unhappy.h
 * @brief Contains declaration for the Unhappy class
 * @authors Aidan Chapman (u22738917)
*/

#include "Rating.h"

#ifndef UNHAPPY_H
#define UNHAPPY_H

class Unhappy : public Rating
{
    public:
        Unhappy();
        ~Unhappy();
        float calculateTip();
};

#endif