#include "Chef.h"
#include "SteakBuilder.h"
#include "BurgerBuilder.h"
#include "FishBuilder.h"
#include "ChipsBuilder.h"
#include "SaladBuilder.h"
#include "BeerBuilder.h"
#include "WaterBuilder.h"
#include "SodaBuilder.h"

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

Chef::~Chef()
{
    for(int i = 0; i < 8; i++)
    {
        delete builders[i];
    }
}

int Chef::request(string order)
{
    char temp = order[0];
    if(temp >= '0' && temp <= '9')
    {
        order = order.substr(1);
        return temp - '0';
    }
    else
    {
        return -1;
    }
}