/*
    # CS 112 Fall 2021 – Assignment 1 - Problem 2
    # <Kevin Tieu>
    # main.cpp
*/
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "change_calc.h"

using namespace std;

int main()
{
    int numQuarters;
    int numDimes;
    int numNickels;
    int numPennies;
    
    /*Ask how many quarters dimes, nickels, and pennies and put
    them into their respective counters. We will use them in 
    our change_calc.cpp that contains the change_calc function specifics
    
    Used a for_loop to simplify the process of repeating the process twice.*/
    for( int i= 0; i < 2; i++)
    {
    
        cout << "Please Input the number of Quarters you have: ";
        cin >> numQuarters;
        
        cout << "Please Input the number of Dimes you have: ";
        cin >> numDimes;
        
        cout << "Please Input the number of Nickels you have: ";
        cin >> numNickels;
        
        cout << "Please Input the number of Pennies you have: ";
        cin >> numPennies;
        
        cout << "Your Total Is: $" + to_string(change_calc(numQuarters, numDimes, numNickels, numPennies));
        
        cout << "\n";
    }
    return EXIT_SUCCESS;
}