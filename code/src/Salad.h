/**
 * @file Salad.h
 * @brief Contains declaration for the Salad class
 * @authors Aidan Chapman (u22738917)
*/

#include "Side.h"

#ifndef SALAD_H
#define SALAD_H

class Salad : public Side
{
    public:
        Salad();
        ~Salad();

        bool washedLettuce = false;
        bool cutLettuce = false;
        bool washedTomato = false;
        bool cutTomato = false;
        bool washedCucumber = false;
        bool cutCucumber = false;
        bool cutFeta = false;
        bool assembledSalad = false;
        bool platedSalad = false;
};

#endif