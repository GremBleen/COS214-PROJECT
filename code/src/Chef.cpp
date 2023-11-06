/**
 * @file Chef.cpp
 * @brief Contains implementation for the Chef class
 * 
 * This file contains the implementation for the Chef class. The Chef class is responsible for building the order.
 * 
 * @authors 
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/

#include "Chef.h"
#include "SteakBuilder.h"
#include "BurgerBuilder.h"
#include "FishBuilder.h"
#include "ChipsBuilder.h"
#include "SaladBuilder.h"
#include "BeerBuilder.h"
#include "WaterBuilder.h"
#include "SodaBuilder.h"


/**
 * @fn Chef::Chef()
 * @brief Constructor of the Chef class
 * @authors Aidan Chapman (u22738917)
*/
Chef::Chef()
{
    builders[steak] = new SteakBuilder();
    builders[burger] = new BurgerBuilder();
    builders[fish] = new FishBuilder();
    builders[chips] = new ChipsBuilder();
    builders[salad] = new SaladBuilder();
    builders[beer] = new BeerBuilder();
    builders[water] = new WaterBuilder();
    builders[soda] = new SodaBuilder();
}

/**
 * @fn Chef::~Chef()
 * @brief Destructor of the Chef class
 * @author 
 * - Aidan Chapman (u22738917)
 * - Graeme Blain (u22625462)
*/
Chef::~Chef()
{
    for(int i = 0; i < 8; i++)
    {
        delete builders[i];
    }
    
    if(this->nextChef != nullptr)
    {
        delete this->nextChef;
    }
}

/**
 * @fn int Chef::request(string order)
 * @param order : string&
 * @brief member function of the Chef class, implementing Adapter functionality
 * @authors Aidan Chapman (u22738917)
*/
int Chef::request(string& order)
{
    char temp = order[0];
    if(temp >= '0' && temp <= '9')
    {
        order = order.substr(1);
        return temp - '0';
    }
    else if(temp == '\0')
    {
        return -2;
    }
    else
    {
        return -1;
    }
}