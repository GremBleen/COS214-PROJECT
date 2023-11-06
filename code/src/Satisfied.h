/**
 * @file Satisfied.h
 * @brief Contains declaration for the Satisfied class
 * 
 * This class is a concrete implementation of the Rating class.
 * It is used to represent a satisfied customer.
 * It is used to calculate the tip for a customer.
 * Satified customers tip 25% of their bill.
 * 
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