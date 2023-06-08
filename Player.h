    /*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Player.h
 * Author: jesusferrer
 *
 * Created on April 23, 2023, 12:42 PM
 */

#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include <string>
#include "Card.h"
#include "Deck.h"

class Deck;

class Player 
{
protected:
    std::vector<Card*> hand;
    int handVal;
    std::string name;
public:
    Player();
    Player(std::string n);
    void setName(std::string n) { name = n;}
    std::string getName() {return name;}
    void setHand(Card* card);
    void getHand();
    int getHandVal();
    void setHandVal();
};

class Dealer : public Player
{
public:
    Dealer();
    void dealCard(Player* player, Deck* d);
    
};

#endif /* PLAYER_H */

