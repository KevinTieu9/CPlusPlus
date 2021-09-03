/*
    # CS 112 Fall 2021 – Assignment 1 - Problem 3
    # <Kevin Tieu>
    # prime_generator.cpp
*/
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int prime_generator(int y)
{
    ofstream myfile;
    myfile.open ("primes.txt");
    
/*We ask the user to input a number so we can grab all primes.
 *i is the number counter we are dealing with, we start at 2
 *y is the user-input number
 *we use J to check if it is or isn't a prime using modulo calculation, and if it is
 *we send the prime number into the primes.txt file
 *we close the file afterwards*/
 
    cout << "Please Input a positive number: ";
    cin >> y;
  
        for (int i=2; i<=y; i++) 
        {
            bool prime=true;
            for (int j=2; j*j<=i; j++)
            {
                if (i % j == 0) 
                {
                    prime=false;
                    break;    
                }
            }   
            if(prime) 
            {
                myfile << to_string(i) + "\n";
            }
        }
    myfile.close();
    return 0;
}