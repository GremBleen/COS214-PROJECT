#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Interface.h" // Include the interface header
#include "Order.h"     // Include the Order class

class Waiter; // forward declarations
class Rating; // forward declarations

class Customer : public Interface
{
private:
    Waiter *waiter;
    Rating *satisfaction;
    ///
    time_t currentTime;
    int patience;

public:
    Customer();
    ~Customer();

    // Setters for time and patience (you can adapt these based on your design)
    void setTime(time_t currentTime);
    void setPatience(int patience);

    // Getters for time and patience (if needed)
    time_t getTime() const;
    int getPatience() const;

    void acceptWaiter(Waiter *waiter);
    void changeRating(Rating *rating);

    // New functions for the Customer class
    void receiveOrder(Order *order);
    float calculatePayment(Order *order);
};

#endif
