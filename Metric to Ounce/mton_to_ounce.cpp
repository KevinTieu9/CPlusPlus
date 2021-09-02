/*
    # CS 112 Fall 2021 – Assignment 1 - Problem 2
    # <Kevin Tieu>
    # mton_to_ounces.cpp
*/

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void mton_to_ounces(double metricTons)
{
    double metricToOunce;
    
        do
        {
            cout << "Please input a metric ton amount and it will convert to ounces(input 0 or less to exit): ";
            cin >> metricTons;
            
            if(metricTons > 0)
            {
                metricToOunce = metricTons * 35273.92;
                
                cout << "Metric to Ounze of " + to_string(metricTons) + " is: " + to_string(metricToOunce);
                
                cout << "\n";
            }
            else;
        }
        while (metricTons > 0);
}