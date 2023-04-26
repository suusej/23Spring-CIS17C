/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   BlackJack.h
 * Author: jesusferrer
 *
 * Created on April 23, 2023, 3:34 PM
 */

#ifndef BLACKJACK_H
#define BLACKJACK_H

#include <iostream>
#include <queue>
#include <list>
#include "Player.h"
#include "Deck.h"
#include <map>

class BlackJack 
{
private:
    std::queue<Player*> plyrQueue;
    std::map<std::string, float> plyrBets;
    Deck* deck;
    Dealer* dealer;
    std::list<std::string> winners;
    
public:
    BlackJack(int numPlayers);
    void dealInitialCards(int numPlayers);
    void playRound(int numPlayers);
    bool checkBust(Player*);
    void checkWinner(Player*, Dealer*);
    
};

#endif /* BLACKJACK_H */

