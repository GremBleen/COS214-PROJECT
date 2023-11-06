/**
 * @file Soda.h
 * @brief Contains declaration for the Soda class
 * @authors
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "Drink.h"

#ifndef SODA_H
#define SODA_H

class Soda : public Drink
{
    public:
        Soda();
        ~Soda();

        bool gotSodaGlass = false; ///< Whether a soda glass has been obtained
        bool pouredSoda = false; ///< Whether soda has been poured into the glass
        bool assembledSoda = false; ///< Whether the soda has been assembled
};

#endif