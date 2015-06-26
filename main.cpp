//
//  main.cpp
//  Lets Make a Deal
//
//  Created by Ken Koyanagi on 2/27/15.
//  Copyright (c) 2015 Ken Koyanagi. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <time.h>
#include <cstdlib>
#include <stdio.h> 
#include <stdlib.h>
using namespace std;

const int MAXRUNS = 10000;
char card1[2+1] = {'W', 'B'};
char card2[2+1] = {'W', 'W'};
char card3[2+1] = {'B', 'B'};

class WLRecords
{
private:
    int wins, losses;
public:
    WLRecords() {init();}
    void init() {wins = losses = 0;}
    void IncrementWins() {wins++;}
    void IncrementLosses() {losses++;}
    int getWins() {return wins;}
    int getLosses() {return losses;}
};

short int RandomCard()
{
    int card;
    card = rand() % 3 + 1; //Rand can be from 1 -> 3
    return card;
}
short int RandomSide()
{
    int side;
    side = rand() % 2 + 1; //Rand can be from 1 -> 2, thus have to decrement by 1.
    return side-1;
}

void OppositeColor(WLRecords &opposite)
{
    int card = RandomCard();
    int side = RandomSide();
    if (card == 1)
    {
        //cout << "The color shown is  " << card1[side] << endl;
        if (card1[side] == 'B')
        {
            char guess = 'W';
            if(side == 1)
            {
                int otherSide = 0;
                if (card1[otherSide] == guess) {opposite.IncrementWins();}
                else opposite.IncrementLosses();
            }
            else
            {
                int otherSide = 1;
                if (card1[otherSide] == guess) {opposite.IncrementWins();}
                else opposite.IncrementLosses();
            }
        }
        else
        {
            char guess = 'B';
            if(side == 1)
            {
                int otherSide = 0;
                if (card1[otherSide] == guess) {opposite.IncrementWins();}
                else opposite.IncrementLosses();
            }
            else
            {
                int otherSide = 1;
                if (card1[otherSide] == guess) {opposite.IncrementWins();}
                else opposite.IncrementLosses();
            }
        }
    }
    if (card == 2)
    {
        //cout << "The color shown is " << card2[side] << endl;
        if (card2[side] == 'B')
        {
            char guess = 'W';
            if(side == 1)
            {
                int otherSide = 0;
                if (card2[otherSide] == guess) {opposite.IncrementWins();}
                else opposite.IncrementLosses();
            }
            else
            {
                int otherSide = 1;
                if (card2[otherSide] == guess) {opposite.IncrementWins();}
                else opposite.IncrementLosses();
            }
        }
        else
        {
            char guess = 'B';
            if(side == 1)
            {
                int otherSide = 0;
                if (card2[otherSide] == guess) {opposite.IncrementWins();}
                else opposite.IncrementLosses();
            }
            else
            {
                int otherSide = 1;
                if (card2[otherSide] == guess) {opposite.IncrementWins();}
                else opposite.IncrementLosses();
            }
        }

    }
    if (card == 3)
    {
        //cout << "The color shown is " << card3[side] << endl;
        if (card3[side] == 'B')
        {
            char guess = 'W';
            if(side == 1)
            {
                int otherSide = 0;
                if (card3[otherSide] == guess) {opposite.IncrementWins();}
                else opposite.IncrementLosses();
            }
            else
            {
                int otherSide = 1;
                if (card3[otherSide] == guess) {opposite.IncrementWins();}
                else opposite.IncrementLosses();
            }
        }
        else
        {
            char guess = 'B';
            if(side == 1)
            {
                int otherSide = 0;
                if (card3[otherSide] == guess) {opposite.IncrementWins();}
                else opposite.IncrementLosses();
            }
            else
            {
                int otherSide = 1;
                if (card3[otherSide] == guess) {opposite.IncrementWins();}
                else opposite.IncrementLosses();
            }
        }

    }
}

void SameColor(WLRecords &same)
{
    int card = RandomCard();
    int side = RandomSide();
    if (card == 1)
    {
        if(card1[side] == 'B')
        {
            char guess = 'B';
            if(side == 1)
            {
                int otherside = 0;
                if(card1[otherside] == guess) {same.IncrementWins();}
                else same.IncrementLosses();
            }
            else
            {
                int otherside = 1;
                if(card1[otherside] == guess) {same.IncrementWins();}
                else same.IncrementLosses();
            }
        }
        else
        {
            char guess = 'W';
            if(side == 1)
            {
                int otherside = 0;
                if(card1[otherside] == guess) {same.IncrementWins();}
                else same.IncrementLosses();
            }
            else
            {
                int otherside = 1;
                if(card1[otherside] == guess) {same.IncrementWins();}
                else same.IncrementLosses();
            }
        }
    }
    if (card == 2)
    {
        if(card2[side] == 'W')
        {
            char guess = 'W';
            if(side == 1)
            {
                int otherside = 0;
                if(card2[otherside] == guess) {same.IncrementWins();}
                else same.IncrementLosses();
            }
            else
            {
                int otherside = 1;
                if(card2[otherside] == guess) {same.IncrementWins();}
                else same.IncrementLosses();
            }
        }
    }
    if(card == 3)
    {
        if(card3[side] == 'B')
        {
            char guess = 'B';
            if(side == 1)
            {
                int otherside = 0;
                if(card3[otherside] == guess) {same.IncrementWins();}
                else same.IncrementLosses();
            }
            else
            {
                int otherside = 1;
                if(card3[otherside] == guess) {same.IncrementWins();}
                else same.IncrementLosses();
            }
        }

    }
}

void AlwaysWhite(WLRecords &white)
{
    int card = RandomCard();
    int side = RandomSide();
    int otherSide;
    if(card == 1)
    {
        char guess = 'W';
        if (side == 1) {otherSide = 0;}
        else {otherSide = 1;}
        
        if(card1[otherSide] == guess) {white.IncrementWins();}
        else white.IncrementLosses();
    }
    if(card == 2)
    {
        white.IncrementWins();
    }
    if(card == 3)
    {
        white.IncrementLosses();
    }
}
void AlwaysBlack(WLRecords &black)
{
    int card = RandomCard();
    int side = RandomSide();
    int otherSide;
    if(card == 1)
    {
        char guess = 'B';
        if(side == 1) {otherSide = 0;}
        else {otherSide = 1;}
        if (card1[otherSide] == guess) {black.IncrementWins();}
        else {black.IncrementLosses();}
    }
    if(card == 2)
    {
        black.IncrementLosses();
    }
    if(card == 3)
    {
        black.IncrementWins();
    }
}

void AlternateColor(WLRecords &alternate, char thisColor)
{
    int card = RandomCard();
    int side = RandomSide();
    int otherSide;
    char guess = thisColor;
    if (side == 1) {otherSide = 0;}
    else {otherSide = 1;}
    
    if(card == 1)
    {
        if(card1[otherSide] == guess) {alternate.IncrementWins();}
        else {alternate.IncrementLosses();}
    }
    if(card == 2)
    {
        if(card2[otherSide] == guess) {alternate.IncrementWins();}
        else {alternate.IncrementLosses();}
    }
    if(card == 3)
    {
        if(card3[otherSide] == guess) {alternate.IncrementWins();}
        else alternate.IncrementLosses();
    }
}

void RandomPick(WLRecords &random)
{
    int card = RandomCard();
    int side = RandomSide();
    int color = RandomSide(); //Since this will return either 0 or 1
    char guess;
    int otherSide;
    
    if(color == 0) {guess = 'W';}
    else guess = 'B';
    if (side == 1) {otherSide = 0;}
    else {otherSide = 1;}
    
    if(card == 1)
    {
        if(card1[otherSide] == guess) {random.IncrementWins();}
        else random.IncrementLosses();
    }
    if(card == 2)
    {
        if(card2[otherSide] == guess) {random.IncrementWins();}
        else random.IncrementLosses();
    }
    if(card == 3)
    {
        if(card3[otherSide] == guess) {random.IncrementWins();}
        else random.IncrementLosses();
    }
}
        
int main(void)
{
    srand(static_cast<unsigned int>(time(NULL)));
    
    cout << "  Let's Make a Deal Simulation" << endl;
    cout << "         (Ken Koyanagi)     " << endl;
    cout << "================================" << endl << endl;
    
    WLRecords opposite_;
    for(int i = 0; i < MAXRUNS; i++)
    {
        OppositeColor(opposite_);
    }
    cout << "By Guessing Opposite Color: " << endl;
    cout << "  Wins     " << opposite_.getWins() << "     " << setprecision(4) << 100.00 * opposite_.getWins() / MAXRUNS << "%" <<  endl;
    cout << "  Losses   " << opposite_.getLosses() << "     " << setprecision(4) << 100.00 * opposite_.getLosses() / MAXRUNS<< "%" << endl << endl;
    
    WLRecords same_;
    for(int i = 0; i < MAXRUNS; i++)
    {
        SameColor(same_);
    }
    cout << "By Guessing Same Color: " << endl;
    cout << "  Wins     " << same_.getWins() << "     " << setprecision(4) << 100.00 * same_.getWins() / MAXRUNS << "%" << endl;
    cout << "  Losses   " << same_.getLosses() << "     " << setprecision(4) << 100.00 * same_.getLosses() / MAXRUNS << "%" << endl << endl;
    
    WLRecords white_;
    for(int i = 0; i < MAXRUNS; i++)
    {
        AlwaysWhite(white_);
    }
    cout << "By Always Guessing White: " << endl;
    cout << "  Wins     " << white_.getWins() << "     " << setprecision(4) << 100.00 * white_.getWins() / MAXRUNS << "%" << endl;
    cout << "  Losses   " << white_.getLosses() << "     " << setprecision(4) << 100.00 * white_.getLosses() / MAXRUNS << "%" << endl << endl;
    
    WLRecords black_;
    for(int i = 0; i < MAXRUNS; i++)
    {
        AlwaysBlack(black_);
    }
    cout << "By Always Guessing Black: " << endl;
    cout << "  Wins     " << black_.getWins() << "     " << setprecision(4) << 100.00 * black_.getWins() / MAXRUNS  << "%" << endl;
    cout << "  Losses   " << black_.getLosses() << "     " << setprecision(4) << 100.00 * black_.getLosses() / MAXRUNS << "%" << endl << endl;

    char switchColor = 'W';
    WLRecords alternate_;
    for(int i = 0; i < MAXRUNS; i++)
    {
        if(switchColor == 'W') {switchColor = 'B';}
        else switchColor = 'W';
        
        AlternateColor(alternate_, switchColor);
    }
    cout << "By Alternating Color: " << endl;
    cout << "  Wins     " << alternate_.getWins() << "     " << setprecision(4) << 100.00 * alternate_.getWins() / MAXRUNS  << "%" <<  endl;
    cout << "  Losses   " << alternate_.getLosses() << "     " << setprecision(4) << 100.00 * alternate_.getLosses() / MAXRUNS  << "%" << endl << endl;
    
    WLRecords random_;
    for(int i = 0; i < MAXRUNS; i++)
    {
        RandomPick(random_);
    }
    cout << "By Picking Color at Random: " << endl;
    cout << "  Wins     " << random_.getWins() << "     " << setprecision(4) << 100.00 * random_.getWins() / MAXRUNS << "%" << endl;
    cout << "  Losses   " << random_.getLosses() << "     " << setprecision(4) << 100.00 * random_.getLosses() / MAXRUNS  <<  "%" << endl << endl;
    
    fflush(stdin);
    getchar();
    return 0;
}
