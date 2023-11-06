/**
 * @file Rating.h
 * @brief Contains declaration for the Rating class
 * 
 * Rating is an abstract class that represents a rating.
 * Ratings are used to calculate the tip for a customer.
 * 
 * @authors 
 * - Aidan Chapman (u22738917) 
 * - Sange Tshakumane (u21479748)
*/

#ifndef RATING_H
#define RATING_H

class Customer;
class Rating{
    public:
        Rating();
        virtual ~Rating();
        virtual float calculateTip() = 0;
        virtual void changeState(Customer* customer) = 0;
};

#endif