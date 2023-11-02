/**
 * @file Rating.h
 * @brief Contains declaration for the Rating class
 * @authors Aidan Chapman (u22738917)
*/

using namespace std;

#ifndef RATING_H
#define RATING_H

class Rating{
    public:
        Rating();
        virtual ~Rating();
        virtual float calculateTip() = 0;
        virtual void changeState(Customer* customer) = 0;
};

#endif