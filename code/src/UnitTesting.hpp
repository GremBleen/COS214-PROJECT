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

#include "Item.h"
#include "ComplexOrder.h"

using namespace std;

void TestSalad()
{
    int numTests = 1;
    int passed = 0;
    cout << "Testing Salad : " << endl;

    cout << "Salad Constructor : ";

    Salad *salad = new Salad();

    if (salad->calculatePrice() == 15.0F)
    {
        cout << true << endl;
        passed++;
    }
    else
    {
        cout << false << endl;
    }

    delete salad;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests==passed?"true":"false") << endl << endl;
}

void TestChips()
{
    int numTests = 1;
    int passed = 0;
    cout << "Testing Chips : " << endl;

    cout << "Chips Constructor : ";

    Chips *chips = new Chips();

    if (chips->calculatePrice() == 15.0F)
    {
        cout << true << endl;
        passed++;
    }
    else
    {
        cout << false << endl;
    }

    delete chips;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests==passed?"true":"false") << endl << endl;
}

void TestSoda()
{
    int numTests = 1;
    int passed = 0;
    cout << "Testing Soda : " << endl;

    cout << "Soda Constructor : ";

    Soda *soda = new Soda();

    if (soda->calculatePrice() == 18.0F)
    {
        cout << true << endl;
        passed++;
    }
    else
    {
        cout << false << endl;
    }

    delete soda;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests==passed?"true":"false") << endl << endl;
}

void TestWater()
{
    int numTests = 1;
    int passed = 0;
    cout << "Testing Water : " << endl;

    cout << "Water Constructor : ";

    Water *water = new Water();

    if (water->calculatePrice() == 12.0F)
    {
        cout << true << endl;
        passed++;
    }
    else
    {
        cout << false << endl;
    }

    delete water;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests==passed?"true":"false") << endl << endl;
}

void TestBeer()
{
    int numTests = 1;
    int passed = 0;
    cout << "Testing Beer : " << endl;

    cout << "Beer Constructor : ";

    Beer *beer = new Beer();

    if (beer->calculatePrice() == 23.0F)
    {
        cout << true << endl;
        passed++;
    }
    else
    {
        cout << false << endl;
    }

    delete beer;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests==passed?"true":"false") << endl << endl;
}

void TestBurger()
{
    int numTests = 1;
    int passed = 0;
    cout << "Testing Burger : " << endl;

    cout << "Burger Constructor : ";

    Burger *burger = new Burger();

    if (burger->calculatePrice() == 35.0F)
    {
        cout << true << endl;
        passed++;
    }
    else
    {
        cout << false << endl;
    }

    delete burger;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests==passed?"true":"false") << endl << endl;
}

void TestSteak()
{
    int numTests = 1;
    int passed = 0;
    cout << "Testing Steak : " << endl;

    cout << "Steak Constructor : ";

    Steak *steak = new Steak();

    if (steak->calculatePrice() == 45.0F)
    {
        cout << true << endl;
        passed++;
    }
    else
    {
        cout << false << endl;
    }

    delete steak;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests==passed?"true":"false") << endl << endl;
}

void TestFish()
{
    int numTests = 1;
    int passed = 0;
    cout << "Testing Fish : " << endl;

    cout << "Fish Constructor : ";

    Fish *fish = new Fish();

    if (fish->calculatePrice() == 55.0F)
    {
        cout << true << endl;
        passed++;
    }
    else
    {
        cout << false << endl;
    }

    delete fish;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests==passed?"true":"false") << endl<< endl;
}

void TestComposite()
{
    int numTests = 8;
    int passed = 0;
    cout << "Testing Composite Structure : " << endl;

    cout << "Composite Construction : ";

    Order *order = new ComplexOrder(NULL);
    cout << true << endl;
    passed++;

    cout << "Creating an item : ";
    Order *item = new Chips();

    if (item->calculatePrice() == 15.0F)
    {
        cout << true << endl;
        passed++;
    }
    else
    {
        cout << false << endl;
    }

    cout << "Adding item to the Composite Structure : ";

    order->addToOrder(item);

    if (order->calculatePrice() == 15.0F)
    {
        cout << true << endl;
        passed++;
    }
    else
    {
        cout << false << endl;
    }

    cout << "Adding a ComplexOrder to the structure : ";

    Order *temp = new ComplexOrder(NULL);
    order->appendToOrder(temp);
    cout << true << endl;
    passed++;

    cout << "Testing addToOrder() (empty ComplexOrder) : ";

    Order *item2 = new Steak();
    order->addToOrder(item2);
    cout << true << endl;
    passed++;

    cout << "Testing addToOrder() (Full ComplexOrder) : ";

    Order *item3 = new Beer();
    order->addToOrder(item3);
    cout << true << endl;
    passed++;

    cout << "Testing calculatePrice() : ";
    if (order->calculatePrice() == 83.0F)
    {
        cout << true << endl;
        passed++;
    }
    else
    {
        cout << false << endl;
        cout << "\t Check that the ComplexOrders and items were added correctly" << endl;
    }

    cout << "Testing destructor *DOES NOT TEST FOR MEMORY LEAKS* : ";
    delete order;
    cout << true << endl;
    passed++;

    cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests==passed?"true":"false") << endl << endl;
}

// void TestChain()
// {
//     int numTests = ;
//     int passed = 0;
//     cout << "Testing Chain : " << endl;



//     cout << "Total Tests : " << numTests << "\tTests Passed : " << passed << " -> " << (numTests==passed?"true":"false") << endl<< endl;
// }

void test()
{
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

}