/**
 * @file SteakBuilder.h
 * @brief Contains declaration for the SteakBuilder class
 * @authors Aidan Chapman (u22738917)
*/

#include "MainBuilder.h"
#include "Steak.h"

using namespace std;

#ifndef STEAKBUILDER_H
#define STEAKBUILDER_H

class SteakBuilder : public MainBuilder
{
    public:
        SteakBuilder();
        ~SteakBuilder();

        // Operations used in template method
        void prepareMeat();
        void seasonMeat();
        void cookMeat();
        void plateMain();

        void tenderiseSteak();
        void seasonSteak();
        void cookSteak();
        void plateSteak();
    private:
        Steak* steak;
};

#endif