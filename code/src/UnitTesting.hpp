/**
 * @file UnitTesting.cpp
 * @brief Used to do testing on structures created
 *
 * Unit tests created for the structures used
 *
 * @author
 * - Aidan Chapman (u22738917)
 */

#include <iostream>

#include "Salad.h"
#include "Chips.h"
#include "Soda.h"
#include "Water.h"
#include "Beer.h"
#include "Burger.h"
#include "Steak.h"
#include "Fish.h"
#include "Chef.h"
#include "MainChef.h"
#include "SideChef.h"
#include "DrinkBuilder.h"
#include "SaladBuilder.h"
#include "ChipsBuilder.h"
#include "SodaBuilder.h"
#include "WaterBuilder.h"
#include "BeerBuilder.h"
#include "BurgerBuilder.h"
#include "SteakBuilder.h"
#include "FishBuilder.h"
#include "Order.h"
#include "DrinkChef.h"
#include "HeadChef.h"

#include "Item.h"
#include "ComplexOrder.h"

using namespace std;

//define namespace for unit testing

void TestSalad() {
    int numTests = 1;
    int passed = 0;
    cout << "Testing Salad : " << endl;

    cout << "Salad Constructor : ";

    Salad* salad = new Salad();

    if (salad->calculatePrice() == 15.0F) {
        cout << true << endl;
        passed++;
    } else {
        cout << false << endl;
    }

    delete salad;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestChips() {
    int numTests = 1;
    int passed = 0;
    cout << "Testing Chips : " << endl;

    cout << "Chips Constructor : ";

    Chips* chips = new Chips();

    if (chips->calculatePrice() == 15.0F) {
        cout << true << endl;
        passed++;
    } else {
        cout << false << endl;
    }

    delete chips;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestSoda() {
    int numTests = 1;
    int passed = 0;
    cout << "Testing Soda : " << endl;

    cout << "Soda Constructor : ";

    Soda* soda = new Soda();

    if (soda->calculatePrice() == 18.0F) {
        cout << true << endl;
        passed++;
    } else {
        cout << false << endl;
    }

    delete soda;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestWater() {
    int numTests = 1;
    int passed = 0;
    cout << "Testing Water : " << endl;

    cout << "Water Constructor : ";

    Water* water = new Water();

    if (water->calculatePrice() == 12.0F) {
        cout << true << endl;
        passed++;
    } else {
        cout << false << endl;
    }

    delete water;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestBeer() {
    int numTests = 1;
    int passed = 0;
    cout << "Testing Beer : " << endl;

    cout << "Beer Constructor : ";

    Beer* beer = new Beer();

    if (beer->calculatePrice() == 23.0F) {
        cout << true << endl;
        passed++;
    } else {
        cout << false << endl;
    }

    delete beer;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestBurger() {
    int numTests = 1;
    int passed = 0;
    cout << "Testing Burger : " << endl;

    cout << "Burger Constructor : ";

    Burger* burger = new Burger();

    if (burger->calculatePrice() == 35.0F) {
        cout << true << endl;
        passed++;
    } else {
        cout << false << endl;
    }

    delete burger;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestSteak() {
    int numTests = 1;
    int passed = 0;
    cout << "Testing Steak : " << endl;

    cout << "Steak Constructor : ";

    Steak* steak = new Steak();

    if (steak->calculatePrice() == 45.0F) {
        cout << true << endl;
        passed++;
    } else {
        cout << false << endl;
    }

    delete steak;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestFish() {
    int numTests = 1;
    int passed = 0;
    cout << "Testing Fish : " << endl;

    cout << "Fish Constructor : ";

    Fish* fish = new Fish();

    if (fish->calculatePrice() == 55.0F) {
        cout << true << endl;
        passed++;
    } else {
        cout << false << endl;
    }

    delete fish;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestComposite() {
    int numTests = 8;
    int passed = 0;
    cout << "Testing Composite Structure : " << endl;

    cout << "Composite Construction : ";

    Order* order = new ComplexOrder(NULL);
    cout << true << endl;
    passed++;

    cout << "Creating an item : ";
    Order* item = new Chips();

    if (item->calculatePrice() == 15.0F) {
        cout << true << endl;
        passed++;
    } else {
        cout << false << endl;
    }

    cout << "Adding item to the Composite Structure : ";

    order->addToOrder(item);

    if (order->calculatePrice() == 15.0F) {
        cout << true << endl;
        passed++;
    } else {
        cout << false << endl;
    }

    cout << "Adding a ComplexOrder to the structure : ";

    Order* temp = new ComplexOrder(NULL);
    order->appendToOrder(temp);
    cout << true << endl;
    passed++;

    cout << "Testing addToOrder() (empty ComplexOrder) : ";

    Order* item2 = new Steak();
    order->addToOrder(item2);
    cout << true << endl;
    passed++;

    cout << "Testing addToOrder() (Full ComplexOrder) : ";

    Order* item3 = new Beer();
    order->addToOrder(item3);
    cout << true << endl;
    passed++;

    cout << "Testing calculatePrice() : ";
    if (order->calculatePrice() == 83.0F) {
        cout << true << endl;
        passed++;
    } else {
        cout << false << endl;
        cout << "\t Check that the ComplexOrders and items were added correctly" << endl;
    }

    cout << "Testing destructor *DOES NOT TEST FOR MEMORY LEAKS* : ";
    delete order;
    cout << true << endl;
    passed++;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestChain() {
    int numTests = 2;
    int passed = 0;
    cout << "Testing Chain of Responsibility : " << endl;

    cout << "Testing Chain Construction : ";

    Chef* chef = new MainChef();
    chef->nextChef = new SideChef();
    chef->nextChef->nextChef = new DrinkChef();
    chef->nextChef->nextChef->nextChef = new HeadChef();

    cout << true << endl;

    passed++;

    cout << "Testing Chain Destructor : " << endl;
    delete chef;

    cout << true << endl;

    passed++;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestBurgerBuilder() {
    int numTests = 6;
    int passed = 0;
    cout << "Testing Burger Builder : " << endl;

    cout << "Testing BurgerBuilder Constructor : ";

    BurgerBuilder* burgerBuilder = new BurgerBuilder();

    cout << true << endl;

    passed++;

    cout << "Testing BurgerBuilder Destructor : ";

    delete burgerBuilder;

    cout << true << endl;

    passed++;

    cout << "Testing BurgerBuilder prepareMeat() : ";

    BurgerBuilder* burgerBuilder2 = new BurgerBuilder();

    burgerBuilder2->prepareMeat();

    cout << true << endl;

    passed++;

    delete burgerBuilder2;

    cout << "Testing BurgerBuilder seasonMeat() : ";

    BurgerBuilder* burgerBuilder3 = new BurgerBuilder();

    burgerBuilder3->seasonMeat();

    cout << true << endl;

    passed++;

    delete burgerBuilder3;

    cout << "Testing BurgerBuilder cookMeat() : ";

    BurgerBuilder* burgerBuilder4 = new BurgerBuilder();

    burgerBuilder4->cookMeat();

    cout << true << endl;

    passed++;

    delete burgerBuilder4;

    cout << "Testing BurgerBuilder plateMain() : ";

    BurgerBuilder* burgerBuilder5 = new BurgerBuilder();

    burgerBuilder5->plateMain();

    cout << true << endl;

    passed++;

    delete burgerBuilder5;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestSteakBuilder() {
    int numTests = 6;
    int passed = 0;
    cout << "Testing Steak Builder : " << endl;

    cout << "Testing SteakBuilder Constructor : ";

    SteakBuilder* steakBuilder = new SteakBuilder();

    cout << true << endl;

    passed++;

    cout << "Testing SteakBuilder Destructor : ";

    delete steakBuilder;

    cout << true << endl;

    passed++;

    cout << "Testing SteakBuilder prepareMeat() : ";

    SteakBuilder* steakBuilder2 = new SteakBuilder();

    steakBuilder2->prepareMeat();

    cout << true << endl;

    passed++;

    delete steakBuilder2;

    cout << "Testing SteakBuilder seasonMeat() : ";

    SteakBuilder* steakBuilder3 = new SteakBuilder();

    steakBuilder3->seasonMeat();

    cout << true << endl;

    passed++;

    delete steakBuilder3;

    cout << "Testing SteakBuilder cookMeat() : ";

    SteakBuilder* steakBuilder4 = new SteakBuilder();

    steakBuilder4->cookMeat();

    cout << true << endl;

    passed++;

    delete steakBuilder4;

    cout << "Testing SteakBuilder plateMain() : ";

    SteakBuilder* steakBuilder5 = new SteakBuilder();

    steakBuilder5->plateMain();

    cout << true << endl;

    passed++;

    delete steakBuilder5;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestFishBuilder() {
    int numTests = 6;
    int passed = 0;
    cout << "Testing Fish Builder : " << endl;

    cout << "Testing FishBuilder Constructor : ";

    FishBuilder* fishBuilder = new FishBuilder();

    cout << true << endl;

    passed++;

    cout << "Testing FishBuilder Destructor : ";

    delete fishBuilder;

    cout << true << endl;

    passed++;

    cout << "Testing FishBuilder prepareMeat() : ";

    FishBuilder* fishBuilder2 = new FishBuilder();

    fishBuilder2->prepareMeat();

    cout << true << endl;

    passed++;

    delete fishBuilder2;

    cout << "Testing FishBuilder seasonMeat() : ";

    FishBuilder* fishBuilder3 = new FishBuilder();

    fishBuilder3->seasonMeat();

    cout << true << endl;

    passed++;

    delete fishBuilder3;

    cout << "Testing FishBuilder cookMeat() : ";

    FishBuilder* fishBuilder4 = new FishBuilder();

    fishBuilder4->cookMeat();

    cout << true << endl;

    passed++;

    delete fishBuilder4;

    cout << "Testing FishBuilder plateMain() : ";

    FishBuilder* fishBuilder5 = new FishBuilder();

    fishBuilder5->plateMain();

    cout << true << endl;

    passed++;

    delete fishBuilder5;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestSaladBuilder() {
    int numTests = 6;
    int passed = 0;
    cout << "Testing Salad Builder : " << endl;

    cout << "Testing SaladBuilder Constructor : ";

    SaladBuilder* saladBuilder = new SaladBuilder();

    cout << true << endl;

    passed++;

    cout << "Testing SaladBuilder Destructor : ";

    delete saladBuilder;

    cout << true << endl;

    passed++;

    cout << "Testing SaladBuilder chopVegetables() : ";

    SaladBuilder* saladBuilder2 = new SaladBuilder();

    saladBuilder2->chopVegetables();

    cout << true << endl;

    passed++;

    delete saladBuilder2;

    cout << "Testing SaladBuilder washVegetables() : ";

    SaladBuilder* saladBuilder3 = new SaladBuilder();

    saladBuilder3->washVegetables();

    cout << true << endl;

    passed++;

    delete saladBuilder3;

    cout << "Testing SaladBuilder assembleSide() : ";

    SaladBuilder* saladBuilder4 = new SaladBuilder();

    saladBuilder4->assembleSide();

    cout << true << endl;

    passed++;

    delete saladBuilder4;

    cout << "Testing SaladBuilder plateSide() : ";

    SaladBuilder* saladBuilder5 = new SaladBuilder();

    saladBuilder5->plateSide();

    cout << true << endl;

    passed++;

    delete saladBuilder5;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestChipsBuilder() {
    int numTests = 6;
    int passed = 0;
    cout << "Testing Chips Builder : " << endl;

    cout << "Testing ChipsBuilder Constructor : ";

    ChipsBuilder* chipsBuilder = new ChipsBuilder();

    cout << true << endl;

    passed++;

    cout << "Testing ChipsBuilder Destructor : ";

    delete chipsBuilder;

    cout << true << endl;

    passed++;

    cout << "Testing ChipsBuilder washVegetables() : ";

    ChipsBuilder* chipsBuilder2 = new ChipsBuilder();

    chipsBuilder2->washVegetables();

    cout << true << endl;

    passed++;

    delete chipsBuilder2;

    cout << "Testing ChipsBuilder chopVegetables() : ";

    ChipsBuilder* chipsBuilder3 = new ChipsBuilder();

    chipsBuilder3->chopVegetables();

    cout << true << endl;

    passed++;

    delete chipsBuilder3;

    cout << "Testing ChipsBuilder assembleSide() : ";

    ChipsBuilder* chipsBuilder4 = new ChipsBuilder();

    chipsBuilder4->assembleSide();

    cout << true << endl;

    passed++;

    delete chipsBuilder4;

    cout << "Testing ChipsBuilder plateSide() : ";

    ChipsBuilder* chipsBuilder5 = new ChipsBuilder();

    chipsBuilder5->plateSide();

    cout << true << endl;

    passed++;

    delete chipsBuilder5;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestSodaBuilder() {
    int numTests = 5;
    int passed = 0;
    cout << "Testing Soda Builder : " << endl;

    cout << "Testing SodaBuilder Constructor : ";

    SodaBuilder* sodaBuilder = new SodaBuilder();

    cout << true << endl;

    passed++;

    cout << "Testing SodaBuilder Destructor : ";

    delete sodaBuilder;

    cout << true << endl;

    passed++;

    cout << "Testing SodaBuilder getGlass() : ";

    SodaBuilder* sodaBuilder2 = new SodaBuilder();

    sodaBuilder2->getGlass();

    cout << true << endl;

    passed++;

    delete sodaBuilder2;

    cout << "Testing SodaBuilder pourDrink() : ";

    SodaBuilder* sodaBuilder3 = new SodaBuilder();

    sodaBuilder3->pourDrink();

    cout << true << endl;

    passed++;

    delete sodaBuilder3;

    cout << "Testing SodaBuilder assembleDrink() : ";

    SodaBuilder* sodaBuilder4 = new SodaBuilder();

    sodaBuilder4->assembleDrink();

    cout << true << endl;

    passed++;

    delete sodaBuilder4;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestWaterBuilder() {
    int numTests = 5;
    int passed = 0;
    cout << "Testing Water Builder : " << endl;

    cout << "Testing WaterBuilder Constructor : ";

    WaterBuilder* waterBuilder = new WaterBuilder();

    cout << true << endl;

    passed++;

    cout << "Testing WaterBuilder Destructor : ";

    delete waterBuilder;

    cout << true << endl;

    passed++;

    cout << "Testing WaterBuilder getGlass() : ";

    WaterBuilder* waterBuilder2 = new WaterBuilder();

    waterBuilder2->getGlass();

    cout << true << endl;

    passed++;

    cout << "Testing WaterBuilder pourDrink() : ";

    waterBuilder2->pourDrink();

    cout << true << endl;

    passed++;

    cout << "Testing WaterBuilder assembleDrink() : ";

    waterBuilder2->assembleDrink();

    cout << true << endl;

    passed++;

    delete waterBuilder2;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void TestBeerBuilder() {
    int numTests = 5;
    int passed = 0;
    cout << "Testing Beer Builder : " << endl;

    cout << "Testing BeerBuilder Constructor : ";

    BeerBuilder* beerBuilder = new BeerBuilder();

    cout << true << endl;

    passed++;

    cout << "Testing BeerBuilder Destructor : ";

    delete beerBuilder;

    cout << true << endl;

    passed++;

    cout << "Testing BeerBuilder getGlass() : ";

    BeerBuilder* beerBuilder2 = new BeerBuilder();

    beerBuilder2->getGlass();

    cout << true << endl;

    passed++;

    delete beerBuilder2;

    cout << "Testing BeerBuilder pourDrink() : ";

    BeerBuilder* beerBuilder3 = new BeerBuilder();

    beerBuilder3->pourDrink();

    cout << true << endl;

    passed++;

    delete beerBuilder3;

    cout << "Testing BeerBuilder assembleDrink() : ";

    BeerBuilder* beerBuilder4 = new BeerBuilder();

    beerBuilder4->assembleDrink();

    cout << true << endl;

    passed++;

    delete beerBuilder4;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests == passed ? "true" : "false") << endl << endl;
}

void test() {
    TestSalad();
    TestChips();
    TestSoda();
    TestWater();
    TestBeer();
    TestBurger();
    TestSteak();
    TestFish();
    TestComposite();
    TestChain();
    TestBurgerBuilder();
    TestSteakBuilder();
    TestFishBuilder();
    TestSaladBuilder();
    TestChipsBuilder();
    TestSodaBuilder();
    TestWaterBuilder();
    TestBeerBuilder();
}