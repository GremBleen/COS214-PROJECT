/**
 * @file Soda.h
 * @brief Contains declaration for the Soda class
 * @authors Aidan Chapman (u22738917)
*/

#include "Drink.h"

using namespace std;

#ifndef SODA_H
#define SODA_H

class Soda : public Drink
{
    public:
        Soda();
        ~Soda();

        bool gotSodaGlass = false;
        bool pouredSoda = false;
        bool assembledSoda = false;
};

#endif