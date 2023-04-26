/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Deck.cpp
 * Author: jesusferrer
 * 
 * Created on April 22, 2023, 4:16 PM
 */

#include "Deck.h"
#include <stack>
#include <ctime>
#include <algorithm>
#include <random>
Deck::Deck()
{
    // Initialize Spades
    Card* crd1SANew = new Card("SPADES\t (A)", 1);
    deck.push(crd1SANew);
    Card* crd1S2New = new Card("SPADES\t (2)", 2);
    deck.push(crd1S2New);
    Card* crd1S3New = new Card("SPADES\t (3)", 3);
    deck.push(crd1S3New);
    Card* crd1S4New = new Card("SPADES\t (4)", 4);
    deck.push(crd1S4New);
    Card* crd1S5New = new Card("SPADES\t (5)", 5);
    deck.push(crd1S5New);
    Card* crd1S6New = new Card("SPADES\t (6)", 6);
    deck.push(crd1S6New);
    Card* crd1S7New = new Card("SPADES\t (7)", 7);
    deck.push(crd1S7New);
    Card* crd1S8New = new Card("SPADES\t (8)", 8);
    deck.push(crd1S8New);
    Card* crd1S9New = new Card("SPADES\t (9)", 9);
    deck.push(crd1S9New);
    Card* crd1S10New = new Card("SPADES\t (10)", 10);
    deck.push(crd1S10New);
    Card* crd1SJNew = new Card("SPADES\t (J)", 10);
    deck.push(crd1SJNew);
    Card* crd1SQNew = new Card("SPADES\t (Q)", 10);
    deck.push(crd1SQNew);
    Card* crd1SKNew = new Card("SPADES\t (K)", 10);
    deck.push(crd1SKNew);
    
    Card* crd2SANew = new Card("SPADES\t (A)", 1);
    deck.push(crd2SANew);
    Card* crd2S2New = new Card("SPADES\t (2)", 2);
    deck.push(crd2S2New);
    Card* crd2S3New = new Card("SPADES\t (3)", 3);
    deck.push(crd2S3New);
    Card* crd2S4New = new Card("SPADES\t (4)", 4);
    deck.push(crd2S4New);
    Card* crd2S5New = new Card("SPADES\t (5)", 5);
    deck.push(crd2S5New);
    Card* crd2S6New = new Card("SPADES\t (6)", 6);
    deck.push(crd2S6New);
    Card* crd2S7New = new Card("SPADES\t (7)", 7);
    deck.push(crd2S7New);
    Card* crd2S8New = new Card("SPADES\t (8)", 8);
    deck.push(crd2S8New);
    Card* crd2S9New = new Card("SPADES\t (9)", 9);
    deck.push(crd2S9New);
    Card* crd2S10New = new Card("SPADES\t (10)", 10);
    deck.push(crd2S10New);
    Card* crd2SJNew = new Card("SPADES\t (J)", 10);
    deck.push(crd2SJNew);
    Card* crd2SQNew = new Card("SPADES\t (Q)", 10);
    deck.push(crd2SQNew);
    Card* crd2SKNew = new Card("SPADES\t (K)", 10);
    deck.push(crd2SKNew);
    
    // Initialize Hearts
    Card* crd1HANew = new Card("HEARTS\t (A)", 1);
    deck.push(crd1HANew);
    Card* crd1H2New = new Card("HEARTS\t (2)", 2);
    deck.push(crd1H2New);
    Card* crd1H3New = new Card("HEARTS\t (3)", 3);
    deck.push(crd1H3New);
    Card* crd1H4New = new Card("HEARTS\t (4)", 4);
    deck.push(crd1H4New);
    Card* crd1H5New = new Card("HEARTS\t (5)", 5);
    deck.push(crd1H5New);
    Card* crd1H6New = new Card("HEARTS\t (6)", 6);
    deck.push(crd1H6New);
    Card* crd1H7New = new Card("HEARTS\t (7)", 7);
    deck.push(crd1H7New);
    Card* crd1H8New = new Card("HEARTS\t (8)", 8);
    deck.push(crd1H8New);
    Card* crd1H9New = new Card("HEARTS\t (9)", 9);
    deck.push(crd1H9New);
    Card* crd1H10New = new Card("HEARTS\t (10)", 10);
    deck.push(crd1H10New);
    Card* crd1HJNew = new Card("HEARTS\t (J)", 10);
    deck.push(crd1HJNew);
    Card* crd1HQNew = new Card("HEARTS\t (Q)", 10);
    deck.push(crd1HQNew);
    Card* crd1HKNew = new Card("HEARTS\t (K)", 10);
    deck.push(crd1HKNew);
    
    Card* crd2HANew = new Card("HEARTS\t (A)", 1);
    deck.push(crd2HANew);
    Card* crd2H2New = new Card("HEARTS\t (2)", 2);
    deck.push(crd2H2New);
    Card* crd2H3New = new Card("HEARTS\t (3)", 3);
    deck.push(crd2H3New);
    Card* crd2H4New = new Card("HEARTS\t (4)", 4);
    deck.push(crd2H4New);
    Card* crd2H5New = new Card("HEARTS\t (5)", 5);
    deck.push(crd2H5New);
    Card* crd2H6New = new Card("HEARTS\t (6)", 6);
    deck.push(crd2H6New);
    Card* crd2H7New = new Card("HEARTS\t (7)", 7);
    deck.push(crd2H7New);
    Card* crd2H8New = new Card("HEARTS\t (8)", 8);
    deck.push(crd2H8New);
    Card* crd2H9New = new Card("HEARTS\t (9)", 9);
    deck.push(crd2H9New);
    Card* crd2H10New = new Card("HEARTS\t (10)", 10);
    deck.push(crd2H10New);
    Card* crd2HJNew = new Card("HEARTS\t (J)", 10);
    deck.push(crd2HJNew);
    Card* crd2HQNew = new Card("HEARTS\t (Q)", 10);
    deck.push(crd2HQNew);
    Card* crd2HKNew = new Card("HEARTS\t (K)", 10);
    deck.push(crd2HKNew);
    
    // Initialize Diamonds
    Card* crd1DANew = new Card("DIAMONDS\t (A)", 1);
    deck.push(crd1DANew);
    Card* crd1D2New = new Card("DIAMONDS\t (2)", 2);
    deck.push(crd1D2New);
    Card* crd1D3New = new Card("DIAMONDS\t (3)", 3);
    deck.push(crd1D3New);
    Card* crd1D4New = new Card("DIAMONDS\t (4)", 4);
    deck.push(crd1D4New);
    Card* crd1D5New = new Card("DIAMONDS\t (5)", 5);
    deck.push(crd1D5New);
    Card* crd1D6New = new Card("DIAMONDS\t (6)", 6);
    deck.push(crd1D6New);
    Card* crd1D7New = new Card("DIAMONDS\t (7)", 7);
    deck.push(crd1D7New);
    Card* crd1D8New = new Card("DIAMONDS\t (8)", 8);
    deck.push(crd1D8New);
    Card* crd1D9New = new Card("DIAMONDS\t (9)", 9);
    deck.push(crd1D9New);
    Card* crd1D10New = new Card("DIAMONDS\t (10)", 10);
    deck.push(crd1D10New);
    Card* crd1DJNew = new Card("DIAMONDS\t (J)", 10);
    deck.push(crd1DJNew);
    Card* crd1DQNew = new Card("DIAMONDS\t (Q)", 10);
    deck.push(crd1DQNew);
    Card* crd1DKNew = new Card("DIAMONDS\t (K)", 10);
    deck.push(crd1DKNew);
    
    Card* crd2DANew = new Card("DIAMONDS\t (A)", 1);
    deck.push(crd2DANew);
    Card* crd2D2New = new Card("DIAMONDS\t (2)", 2);
    deck.push(crd2D2New);
    Card* crd2D3New = new Card("DIAMONDS\t (3)", 3);
    deck.push(crd2D3New);
    Card* crd2D4New = new Card("DIAMONDS\t (4)", 4);
    deck.push(crd2D4New);
    Card* crd2D5New = new Card("DIAMONDS\t (5)", 5);
    deck.push(crd2D5New);
    Card* crd2D6New = new Card("DIAMONDS\t (6)", 6);
    deck.push(crd2D6New);
    Card* crd2D7New = new Card("DIAMONDS\t (7)", 7);
    deck.push(crd2D7New);
    Card* crd2D8New = new Card("DIAMONDS\t (8)", 8);
    deck.push(crd2D8New);
    Card* crd2D9New = new Card("DIAMONDS\t (9)", 9);
    deck.push(crd2D9New);
    Card* crd2D10New = new Card("DIAMONDS\t (10)", 10);
    deck.push(crd2D10New);
    Card* crd2DJNew = new Card("DIAMONDS\t (J)", 10);
    deck.push(crd2DJNew);
    Card* crd2DQNew = new Card("DIAMONDS\t (Q)", 10);
    deck.push(crd2DQNew);
    Card* crd2DKNew = new Card("DIAMONDS\t (K)", 10);
    deck.push(crd2DKNew);
    
    // Initialize Clubs
    Card* crd1CANew = new Card("CLUBS\t (A)", 1);
    deck.push(crd1CANew);
    Card* crd1C2New = new Card("CLUBS\t (2)", 2);
    deck.push(crd1C2New);
    Card* crd1C3New = new Card("CLUBS\t (3)", 3);
    deck.push(crd1C3New);
    Card* crd1C4New = new Card("CLUBS\t (4)", 4);
    deck.push(crd1C4New);
    Card* crd1C5New = new Card("CLUBS\t (5)", 5);
    deck.push(crd1C5New);
    Card* crd1C6New = new Card("CLUBS\t (6)", 6);
    deck.push(crd1C6New);
    Card* crd1C7New = new Card("CLUBS\t (7)", 7);
    deck.push(crd1C7New);
    Card* crd1C8New = new Card("CLUBS\t (8)", 8);
    deck.push(crd1C8New);
    Card* crd1C9New = new Card("CLUBS\t (9)", 9);
    deck.push(crd1C9New);
    Card* crd1C10New = new Card("CLUBS\t (10)", 10);
    deck.push(crd1C10New);
    Card* crd1CJNew = new Card("CLUBS\t (J)", 10);
    deck.push(crd1CJNew);
    Card* crd1CQNew = new Card("CLUBS\t (Q)", 10);
    deck.push(crd1CQNew);
    Card* crd1CKNew = new Card("CLUBS\t (K)", 10);
    deck.push(crd1CKNew);
    
    Card* crd2CANew = new Card("CLUBS\t (A)", 1);
    deck.push(crd2CANew);
    Card* crd2C2New = new Card("CLUBS\t (2)", 2);
    deck.push(crd2C2New);
    Card* crd2C3New = new Card("CLUBS\t (3)", 3);
    deck.push(crd2C3New);
    Card* crd2C4New = new Card("CLUBS\t (4)", 4);
    deck.push(crd2C4New);
    Card* crd2C5New = new Card("CLUBS\t (5)", 5);
    deck.push(crd2C5New);
    Card* crd2C6New = new Card("CLUBS\t (6)", 6);
    deck.push(crd2C6New);
    Card* crd2C7New = new Card("CLUBS\t (7)", 7);
    deck.push(crd2C7New);
    Card* crd2C8New = new Card("CLUBS\t (8)", 8);
    deck.push(crd2C8New);
    Card* crd2C9New = new Card("CLUBS\t (9)", 9);
    deck.push(crd2C9New);
    Card* crd2C10New = new Card("CLUBS\t (10)", 10);
    deck.push(crd2C10New);
    Card* crd2CJNew = new Card("CLUBS\t (J)", 10);
    deck.push(crd2CJNew);
    Card* crd2CQNew = new Card("CLUBS\t (Q)", 10);
    deck.push(crd2CQNew);
    Card* crd2CKNew = new Card("CLUBS\t (K)", 10);
    deck.push(crd2CKNew);
    
    
}
void Deck::shuffle()
{   
    std::srand(unsigned(time(0)));
    
    int seed = rand() % 50 - 1;
    
    std::vector<Card*> temp;
    
    for(int i=0; i<104; i++)
    {
        temp.push_back(deck.top());
        deck.pop();
    }
    
    for(int i=0; i<seed; i++)
    {
        random_shuffle(temp.begin(), temp.end());
    }
    
    for(int i=0; i<104; i++)
    {
        deck.push(temp[i]);
    }
}
void Deck::prnt()
{
    Card* temp[104];
    for(int i=0; i <104; i++)
    {
        temp[i] = deck.top();
        deck.pop();
    }
    for(int i=0; i<104; i++)
    {
        std::cout << i+1 << ". " << temp[i]->getSuit() << "\n";
        deck.push(temp[i]);
    }
}
std::string Deck::getStrCard()
{
    std::string cardReturn = deck.top()->getSuit();
    deck.pop();
    
    return cardReturn;
}


