/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Deck.h
 * Author: jesusferrer
 *
 * Created on April 22, 2023, 4:16 PM
 */

#ifndef DECK_H
#define DECK_H

#include <iostream>
#include "Card.h"
#include <stack>
#include "Player.h"

class Card;

class Deck 
{
private:
    std::stack<Card*> deck;
    
public:
    Deck();
    void shuffle();
    void prnt();
    std::string getStrCard();
    //Card* getCard();
    friend class Dealer;
};

#endif /* DECK_H */

