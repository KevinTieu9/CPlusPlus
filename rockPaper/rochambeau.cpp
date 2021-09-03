/*
    # CS 112 Fall 2021 – Assignment 1 - Problem 2
    # <Kevin Tieu>
    # rochambeau.cpp
*/

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void rochambeau(char PlayerOne)
{   
    char playerOne = 'R';
    char rock = 'R';
    char paper = 'P';
    char scissor = 'S';
    char letters[4] = "RPS";
    
    int playerTally = 0;
    int computerTally = 0;
    int tieTally = 0;
    
    srand ( time(NULL) );
    
    
    cout << "Rock, Paper, Scissors Game\n";
    
    do
    {
        int ranNum = rand() % 3;
        int computerOne = letters[ranNum];
        string computerLetter;
        
        cout << "\n\nPlease enter your move: ('P/p' for Paper, 'R/r' for Rock, 'S/s' for Scissor, any other letter exits the game.)";
    
        cin >> playerOne;
        
        
        if (computerOne == 80)
        {
            computerLetter = "P";
        }
        else if (computerOne == 82)
        {
            computerLetter = "R";        
        }
        else if (computerOne == 83)
        {
            computerLetter = "S";       
        }
        
        
        cout<< "Computer Chose: " + computerLetter + "\n";
        
            if (toupper(playerOne) == toupper(computerOne))
            {
                cout <<"\nIt is a tie.";
                tieTally++;
            }
        
            if (toupper(playerOne) == rock & toupper(computerOne) == paper)
            {
                cout << "\nPaper wraps rock, Computer wins";
                computerTally++;
            }
        
            if (toupper(playerOne)  == rock & toupper(computerOne)== scissor)
            {
                cout << "\nRock smashes scissors, Player wins";
                playerTally++;
            }
        
            if (toupper(playerOne) == paper & toupper(computerOne) == rock)
            {
                cout <<"\nPaper wraps rock, Player wins";
                playerTally++;
            }
        
            if (toupper(playerOne) == rock & toupper(computerOne) == scissor )
            {
                cout << "\nRock smashes scissors, Player wins";
                playerTally++;
            }
        
            if (toupper(playerOne)  == paper & toupper(computerOne)== scissor)
            {
                cout <<"\nScissors cut paper, Computer wins";
                computerTally++;
            }
        
            if (toupper(playerOne) == scissor  & toupper(computerOne)  == paper)
            {
                cout <<"\nScissors cut paper, Player wins";
                playerTally++;
            }
        
            if (toupper(playerOne) == scissor  && toupper(computerOne)  == rock)
            {
                cout <<"\nRock smashes scissors, Computer wins";
                computerTally++;
            }
    }while(toupper(playerOne) == 80 && 82 && 83);
    
    cout << "\nScore is:\nTie: " + to_string(tieTally) + " Player: " + to_string(playerTally) + " Computer: " + to_string(computerTally) + "\n" << endl;
}