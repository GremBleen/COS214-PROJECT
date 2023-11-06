/**
 * @file Salad.h
 * @brief Contains declaration for the Salad class
 * 
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

        bool washedLettuce = false; ///< Whether the lettuce has been washed
        bool cutLettuce = false; ///< Whether the lettuce has been cut
        bool washedTomato = false; ///< Whether the tomato has been washed
        bool cutTomato = false; ///< Whether the tomato has been cut
        bool washedCucumber = false; ///< Whether the cucumber has been washed
        bool cutCucumber = false; ///< Whether the cucumber has been cut
        bool cutFeta = false; ///< Whether the feta has been cut
        bool assembledSalad = false; ///< Whether the salad has been assembled
        bool platedSalad = false; ///< Whether the salad has been plated
};

#endif