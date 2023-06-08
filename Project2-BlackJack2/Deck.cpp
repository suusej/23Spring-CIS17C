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
#include "Graph.h"
#include <stack>
#include <ctime>
#include <algorithm>
#include <random>
#include <queue>

Deck::Deck()
{
    // Initialize Spades
    Card* crd1SANew = new Card("SPADES\t(A)", 1);
    deck.push(crd1SANew);
    Card* crd1S2New = new Card("SPADES\t(2)", 2);
    deck.push(crd1S2New);
    Card* crd1S3New = new Card("SPADES\t(3)", 3);
    deck.push(crd1S3New);
    Card* crd1S4New = new Card("SPADES\t(4)", 4);
    deck.push(crd1S4New);
    Card* crd1S5New = new Card("SPADES\t(5)", 5);
    deck.push(crd1S5New);
    Card* crd1S6New = new Card("SPADES\t(6)", 6);
    deck.push(crd1S6New);
    Card* crd1S7New = new Card("SPADES\t(7)", 7);
    deck.push(crd1S7New);
    Card* crd1S8New = new Card("SPADES\t(8)", 8);
    deck.push(crd1S8New);
    Card* crd1S9New = new Card("SPADES\t(9)", 9);
    deck.push(crd1S9New);
    Card* crd1S10New = new Card("SPADES\t(10)", 10);
    deck.push(crd1S10New);
    Card* crd1SJNew = new Card("SPADES\t(J)", 10);
    deck.push(crd1SJNew);
    Card* crd1SQNew = new Card("SPADES\t(Q)", 10);
    deck.push(crd1SQNew);
    Card* crd1SKNew = new Card("SPADES\t(K)", 10);
    deck.push(crd1SKNew);
    
    Card* crd2SANew = new Card("SPADES\t(A)", 1);
    deck.push(crd2SANew);
    Card* crd2S2New = new Card("SPADES\t(2)", 2);
    deck.push(crd2S2New);
    Card* crd2S3New = new Card("SPADES\t(3)", 3);
    deck.push(crd2S3New);
    Card* crd2S4New = new Card("SPADES\t(4)", 4);
    deck.push(crd2S4New);
    Card* crd2S5New = new Card("SPADES\t(5)", 5);
    deck.push(crd2S5New);
    Card* crd2S6New = new Card("SPADES\t(6)", 6);
    deck.push(crd2S6New);
    Card* crd2S7New = new Card("SPADES\t(7)", 7);
    deck.push(crd2S7New);
    Card* crd2S8New = new Card("SPADES\t(8)", 8);
    deck.push(crd2S8New);
    Card* crd2S9New = new Card("SPADES\t(9)", 9);
    deck.push(crd2S9New);
    Card* crd2S10New = new Card("SPADES\t(10)", 10);
    deck.push(crd2S10New);
    Card* crd2SJNew = new Card("SPADES\t(J)", 10);
    deck.push(crd2SJNew);
    Card* crd2SQNew = new Card("SPADES\t(Q)", 10);
    deck.push(crd2SQNew);
    Card* crd2SKNew = new Card("SPADES\t(K)", 10);
    deck.push(crd2SKNew);
    
    // Initialize Hearts
    Card* crd1HANew = new Card("HEARTS\t(A)", 1);
    deck.push(crd1HANew);
    Card* crd1H2New = new Card("HEARTS\t(2)", 2);
    deck.push(crd1H2New);
    Card* crd1H3New = new Card("HEARTS\t(3)", 3);
    deck.push(crd1H3New);
    Card* crd1H4New = new Card("HEARTS\t(4)", 4);
    deck.push(crd1H4New);
    Card* crd1H5New = new Card("HEARTS\t(5)", 5);
    deck.push(crd1H5New);
    Card* crd1H6New = new Card("HEARTS\t(6)", 6);
    deck.push(crd1H6New);
    Card* crd1H7New = new Card("HEARTS\t(7)", 7);
    deck.push(crd1H7New);
    Card* crd1H8New = new Card("HEARTS\t(8)", 8);
    deck.push(crd1H8New);
    Card* crd1H9New = new Card("HEARTS\t(9)", 9);
    deck.push(crd1H9New);
    Card* crd1H10New = new Card("HEARTS\t(10)", 10);
    deck.push(crd1H10New);
    Card* crd1HJNew = new Card("HEARTS\t(J)", 10);
    deck.push(crd1HJNew);
    Card* crd1HQNew = new Card("HEARTS\t(Q)", 10);
    deck.push(crd1HQNew);
    Card* crd1HKNew = new Card("HEARTS\t(K)", 10);
    deck.push(crd1HKNew);
    
    Card* crd2HANew = new Card("HEARTS\t(A)", 1);
    deck.push(crd2HANew);
    Card* crd2H2New = new Card("HEARTS\t(2)", 2);
    deck.push(crd2H2New);
    Card* crd2H3New = new Card("HEARTS\t(3)", 3);
    deck.push(crd2H3New);
    Card* crd2H4New = new Card("HEARTS\t(4)", 4);
    deck.push(crd2H4New);
    Card* crd2H5New = new Card("HEARTS\t(5)", 5);
    deck.push(crd2H5New);
    Card* crd2H6New = new Card("HEARTS\t(6)", 6);
    deck.push(crd2H6New);
    Card* crd2H7New = new Card("HEARTS\t(7)", 7);
    deck.push(crd2H7New);
    Card* crd2H8New = new Card("HEARTS\t(8)", 8);
    deck.push(crd2H8New);
    Card* crd2H9New = new Card("HEARTS\t(9)", 9);
    deck.push(crd2H9New);
    Card* crd2H10New = new Card("HEARTS\t(10)", 10);
    deck.push(crd2H10New);
    Card* crd2HJNew = new Card("HEARTS\t(J)", 10);
    deck.push(crd2HJNew);
    Card* crd2HQNew = new Card("HEARTS\t(Q)", 10);
    deck.push(crd2HQNew);
    Card* crd2HKNew = new Card("HEARTS\t(K)", 10);
    deck.push(crd2HKNew);
    
    // Initialize Diamonds
    Card* crd1DANew = new Card("DIAMONDS\t(A)", 1);
    deck.push(crd1DANew);
    Card* crd1D2New = new Card("DIAMONDS\t(2)", 2);
    deck.push(crd1D2New);
    Card* crd1D3New = new Card("DIAMONDS\t(3)", 3);
    deck.push(crd1D3New);
    Card* crd1D4New = new Card("DIAMONDS\t(4)", 4);
    deck.push(crd1D4New);
    Card* crd1D5New = new Card("DIAMONDS\t(5)", 5);
    deck.push(crd1D5New);
    Card* crd1D6New = new Card("DIAMONDS\t(6)", 6);
    deck.push(crd1D6New);
    Card* crd1D7New = new Card("DIAMONDS\t(7)", 7);
    deck.push(crd1D7New);
    Card* crd1D8New = new Card("DIAMONDS\t(8)", 8);
    deck.push(crd1D8New);
    Card* crd1D9New = new Card("DIAMONDS\t(9)", 9);
    deck.push(crd1D9New);
    Card* crd1D10New = new Card("DIAMONDS\t(10)", 10);
    deck.push(crd1D10New);
    Card* crd1DJNew = new Card("DIAMONDS\t(J)", 10);
    deck.push(crd1DJNew);
    Card* crd1DQNew = new Card("DIAMONDS\t(Q)", 10);
    deck.push(crd1DQNew);
    Card* crd1DKNew = new Card("DIAMONDS\t(K)", 10);
    deck.push(crd1DKNew);
    
    Card* crd2DANew = new Card("DIAMONDS\t(A)", 1);
    deck.push(crd2DANew);
    Card* crd2D2New = new Card("DIAMONDS\t(2)", 2);
    deck.push(crd2D2New);
    Card* crd2D3New = new Card("DIAMONDS\t(3)", 3);
    deck.push(crd2D3New);
    Card* crd2D4New = new Card("DIAMONDS\t(4)", 4);
    deck.push(crd2D4New);
    Card* crd2D5New = new Card("DIAMONDS\t(5)", 5);
    deck.push(crd2D5New);
    Card* crd2D6New = new Card("DIAMONDS\t(6)", 6);
    deck.push(crd2D6New);
    Card* crd2D7New = new Card("DIAMONDS\t(7)", 7);
    deck.push(crd2D7New);
    Card* crd2D8New = new Card("DIAMONDS\t(8)", 8);
    deck.push(crd2D8New);
    Card* crd2D9New = new Card("DIAMONDS\t(9)", 9);
    deck.push(crd2D9New);
    Card* crd2D10New = new Card("DIAMONDS\t(10)", 10);
    deck.push(crd2D10New);
    Card* crd2DJNew = new Card("DIAMONDS\t(J)", 10);
    deck.push(crd2DJNew);
    Card* crd2DQNew = new Card("DIAMONDS\t(Q)", 10);
    deck.push(crd2DQNew);
    Card* crd2DKNew = new Card("DIAMONDS\t(K)", 10);
    deck.push(crd2DKNew);
    
    // Initialize Clubs
    Card* crd1CANew = new Card("CLUBS\t(A)", 1);
    deck.push(crd1CANew);
    Card* crd1C2New = new Card("CLUBS\t(2)", 2);
    deck.push(crd1C2New);
    Card* crd1C3New = new Card("CLUBS\t(3)", 3);
    deck.push(crd1C3New);
    Card* crd1C4New = new Card("CLUBS\t(4)", 4);
    deck.push(crd1C4New);
    Card* crd1C5New = new Card("CLUBS\t(5)", 5);
    deck.push(crd1C5New);
    Card* crd1C6New = new Card("CLUBS\t(6)", 6);
    deck.push(crd1C6New);
    Card* crd1C7New = new Card("CLUBS\t(7)", 7);
    deck.push(crd1C7New);
    Card* crd1C8New = new Card("CLUBS\t(8)", 8);
    deck.push(crd1C8New);
    Card* crd1C9New = new Card("CLUBS\t(9)", 9);
    deck.push(crd1C9New);
    Card* crd1C10New = new Card("CLUBS\t(10)", 10);
    deck.push(crd1C10New);
    Card* crd1CJNew = new Card("CLUBS\t(J)", 10);
    deck.push(crd1CJNew);
    Card* crd1CQNew = new Card("CLUBS\t(Q)", 10);
    deck.push(crd1CQNew);
    Card* crd1CKNew = new Card("CLUBS\t(K)", 10);
    deck.push(crd1CKNew);
    
    Card* crd2CANew = new Card("CLUBS\t(A)", 1);
    deck.push(crd2CANew);
    Card* crd2C2New = new Card("CLUBS\t(2)", 2);
    deck.push(crd2C2New);
    Card* crd2C3New = new Card("CLUBS\t(3)", 3);
    deck.push(crd2C3New);
    Card* crd2C4New = new Card("CLUBS\t(4)", 4);
    deck.push(crd2C4New);
    Card* crd2C5New = new Card("CLUBS\t(5)", 5);
    deck.push(crd2C5New);
    Card* crd2C6New = new Card("CLUBS\t(6)", 6);
    deck.push(crd2C6New);
    Card* crd2C7New = new Card("CLUBS\t(7)", 7);
    deck.push(crd2C7New);
    Card* crd2C8New = new Card("CLUBS\t(8)", 8);
    deck.push(crd2C8New);
    Card* crd2C9New = new Card("CLUBS\t(9)", 9);
    deck.push(crd2C9New);
    Card* crd2C10New = new Card("CLUBS\t(10)", 10);
    deck.push(crd2C10New);
    Card* crd2CJNew = new Card("CLUBS\t(J)", 10);
    deck.push(crd2CJNew);
    Card* crd2CQNew = new Card("CLUBS\t(Q)", 10);
    deck.push(crd2CQNew);
    Card* crd2CKNew = new Card("CLUBS\t(K)", 10);
    deck.push(crd2CKNew);
    
    // Initialize Spades
    srtDeck.push_back(crd1SANew);
    srtDeck.push_back(crd1S2New);
    srtDeck.push_back(crd1S3New);
    srtDeck.push_back(crd1S4New);
    srtDeck.push_back(crd1S5New);
    srtDeck.push_back(crd1S6New);
    srtDeck.push_back(crd1S7New);
    srtDeck.push_back(crd1S8New);
    srtDeck.push_back(crd1S9New);
    srtDeck.push_back(crd1S10New);
    srtDeck.push_back(crd1SJNew);
    srtDeck.push_back(crd1SQNew);
    srtDeck.push_back(crd1SKNew);
    srtDeck.push_back(crd2SANew);
    srtDeck.push_back(crd2S2New);
    srtDeck.push_back(crd2S3New);
    srtDeck.push_back(crd2S4New);
    srtDeck.push_back(crd2S5New);
    srtDeck.push_back(crd2S6New);
    srtDeck.push_back(crd2S7New);
    srtDeck.push_back(crd2S8New);
    srtDeck.push_back(crd2S9New);
    srtDeck.push_back(crd2S10New);
    srtDeck.push_back(crd2SJNew);
    srtDeck.push_back(crd2SQNew);
    srtDeck.push_back(crd2SKNew);
    
    // Initialize Hearts
    srtDeck.push_back(crd1HANew);
    srtDeck.push_back(crd1H2New);
    srtDeck.push_back(crd1H3New);
    srtDeck.push_back(crd1H4New);
    srtDeck.push_back(crd1H5New);
    srtDeck.push_back(crd1H6New);
    srtDeck.push_back(crd1H7New);
    srtDeck.push_back(crd1H8New);
    srtDeck.push_back(crd1H9New);
    srtDeck.push_back(crd1H10New);
    srtDeck.push_back(crd1HJNew);
    srtDeck.push_back(crd1HQNew);
    srtDeck.push_back(crd1HKNew);
    
    srtDeck.push_back(crd2HANew);
    srtDeck.push_back(crd2H2New);
    srtDeck.push_back(crd2H3New);
    srtDeck.push_back(crd2H4New);
    srtDeck.push_back(crd2H5New);
    srtDeck.push_back(crd2H6New);
    srtDeck.push_back(crd2H7New);
    srtDeck.push_back(crd2H8New);
    srtDeck.push_back(crd2H9New);
    srtDeck.push_back(crd2H10New);
    srtDeck.push_back(crd2HJNew);
    srtDeck.push_back(crd2HQNew);
    srtDeck.push_back(crd2HKNew);
    
    // Initialize Diamonds
    srtDeck.push_back(crd1DANew);
    srtDeck.push_back(crd1D2New);
    srtDeck.push_back(crd1D3New);
    srtDeck.push_back(crd1D4New);
    srtDeck.push_back(crd1D5New);
    srtDeck.push_back(crd1D6New);
    srtDeck.push_back(crd1D7New);
    srtDeck.push_back(crd1D8New);
    srtDeck.push_back(crd1D9New);
    srtDeck.push_back(crd1D10New);
    srtDeck.push_back(crd1DJNew);
    srtDeck.push_back(crd1DQNew);
    srtDeck.push_back(crd1DKNew);
    
    srtDeck.push_back(crd2DANew);
    srtDeck.push_back(crd2D2New);
    srtDeck.push_back(crd2D3New);
    srtDeck.push_back(crd2D4New);
    srtDeck.push_back(crd2D5New);
    srtDeck.push_back(crd2D6New);
    srtDeck.push_back(crd2D7New);
    srtDeck.push_back(crd2D8New);
    srtDeck.push_back(crd2D9New);
    srtDeck.push_back(crd2D10New);
    srtDeck.push_back(crd2DJNew);
    srtDeck.push_back(crd2DQNew);
    srtDeck.push_back(crd2DKNew);
    
    // Initialize Clubs
    srtDeck.push_back(crd1CANew);
    srtDeck.push_back(crd1C2New);
    srtDeck.push_back(crd1C3New);
    srtDeck.push_back(crd1C4New);
    srtDeck.push_back(crd1C5New);
    srtDeck.push_back(crd1C6New);
    srtDeck.push_back(crd1C7New);
    srtDeck.push_back(crd1C8New);
    srtDeck.push_back(crd1C9New);
    srtDeck.push_back(crd1C10New);
    srtDeck.push_back(crd1CJNew);
    srtDeck.push_back(crd1CQNew);
    srtDeck.push_back(crd1CKNew);
    
    srtDeck.push_back(crd2CANew);
    srtDeck.push_back(crd2C2New);
    srtDeck.push_back(crd2C3New);
    srtDeck.push_back(crd2C4New);
    srtDeck.push_back(crd2C5New);
    srtDeck.push_back(crd2C6New);
    srtDeck.push_back(crd2C7New);
    srtDeck.push_back(crd2C8New);
    srtDeck.push_back(crd2C9New);
    srtDeck.push_back(crd2C10New);
    srtDeck.push_back(crd2CJNew);
    srtDeck.push_back(crd2CQNew);
    srtDeck.push_back(crd2CKNew);
    
}
Deck::Deck(int)
{
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
}
void Deck::shuffle()
{   
    std::srand(unsigned(time(0)));
    
    shuffleRecursive(104);
}
void Deck::shuffleRecursive(int count) {
    if (count == 0) {
        return;  // Base case: nothing to shuffle
    }

    int seed = std::rand() % 50 - 1;

    std::vector<Card*> temp;
    while (!deck.empty()) {
        temp.push_back(deck.top());
        deck.pop();
    }

    for (int i = 0; i < seed; ++i) {
        std::random_shuffle(temp.begin(), temp.end());
    }

    for (int i = 0; i < temp.size(); ++i) {
        deck.push(temp[i]);
    }

    // Recursive call to shuffle remaining cards
    shuffleRecursive(count - 1);
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
    if (deck.empty())
    {
        return ""; 
    }
    std::string cardReturn = deck.top()->getSuit();
    deck.pop();
    
    return cardReturn;
}
Card* Deck::getCard()
{
    if(deck.empty())
    {
        return 0;
    }
    
    Card* cardReturn = deck.top();
    deck.pop();
    
    return cardReturn;
}
void Deck::sortTree()
{    
    Tree deckTree;
    
    for(int i=0; i<104; i++)
    {
        deckTree.insert(deck.top());
        deck.pop();
    }
    
    deckTree.inorderTrav();
    return;
}
void Deck::breadthFirstTraversal(Graph& graph, int startVertex)
{
    std::vector<bool> visited(graph.getNumVertices(), false);
    std::queue<int> queue;

    visited[startVertex] = true;
    queue.push(startVertex);
    
    int i=0;
    while (!queue.empty())
    {
        int currentVertex = queue.front();
        queue.pop();

        Card* currentCard = graph.getVertexData(currentVertex);
        std::cout << i+1 << ". " << currentCard->getStrCard() << std::endl;
        i++;

        std::vector<int> neighbors = graph.getNeighbors(currentVertex);
        for (int neighbor : neighbors)
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                queue.push(neighbor);
            }
        }
    }
}
void Deck::getGraph()
{
    Graph deckGraph;
    
    for(int i=0; i<104; i++)
    {
        deckGraph.addVertex(deck.top());
        deck.pop();
    }
    for (int i = 0; i < 104 - 1; i++)
    {
        deckGraph.addEdge(i, i + 1);
    }
    
    breadthFirstTraversal(deckGraph, 0);
}