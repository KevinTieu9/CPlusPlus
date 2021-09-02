/*
    # CS 112 Fall 2021 – Assignment 1 - Problem 2
    # <Kevin Tieu>
    # change_calc.cpp
*/

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double change_calc(int numQuarters, int numDimes, int numNickels, int numPennies)
{
    double total = (numQuarters * .25) + (numDimes * .10) + (numNickels * .05) + (numPennies * .01);
    
    return total;
}