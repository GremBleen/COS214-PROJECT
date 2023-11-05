/**
 * @file Customer.cpp
 * @brief Contains implementation for the Customer class
 * @authors Boikanyo Tshwale (u20785233)
*/
#include "Customer.h"
#include <iostream>
#include <random>

/*
 * Constructor for Customer 
 * Takes in one prameter for the time arrived in the Resturant
 * Set all private varibales to nullPointer
*/
Customer::Customer(int timeStamp){
    this->timestamp = timeStamp;
    this->waiter = nullptr;
    this->satisfaction = nullptr;
    this->order = nullptr;
}
/*
 * Destructor for Customer 
 * destroy Customer obj
*/
Customer::~Customer(){}

/*
 * Accept Waiter for Customer 
 * Takes in one prameter To see which waiter will serve the customers
 * Notify the Waiter They want to Order
*/
void Customer::acceptWaiter(Waiter * waiter){
    this->waiter = waiter;//attach waiter to customer
    cout<<"Customer is seated and ready to order."<<endl;
    
    order = new Order();//dont know how to determine orders yet
    
    this->waiter.takeOrder(this);
}

/*
 * Get Order
*/
Order* Customer::getOrder(){
    return this->order;
}

/*
 * Get Item they Requested from the Kitchen
*/
string Customer::getOrderRequest(){
    return "";
}

/*
 * Change rating, rating is determined when food is recived 
 * this function is used in the case the Customer enjoyed thier food thier rating might be changed same visa versa
*/
void Customer::changeRating(Raiting* rating){
    if(this->satisfaction)
        delete this->satisfaction;

    return this->satisfaction = rating;
}
/*
 * ReciveOrder From Waiter
*/
void Customer::reciveOrder(Order* order){
    // should this function reference the order they asked to be made
}
/*
 * Calculate meal cost including tip(which is determined by rating)
*/
float Customer::calculatePayment(){
    //dont know how to calculate for meals
    return 0.0;
}
/*
 * Get Table
*/
Table* Customer::getTable(){
    return this->table;
}
/*
 * Get Waiter
*/
Waiter* Customer::getWaiter(){
    return this->waiter;
}
/*
 * Get time they entered the resturant
*/
int Customer::getTimestamp(){
    return this->timestamp;
}