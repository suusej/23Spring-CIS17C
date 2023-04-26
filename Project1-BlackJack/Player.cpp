/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Player.cpp
 * Author: jesusferrer
 * 
 * Created on April 23, 2023, 12:42 PM
 */

#include "Player.h"
#include "Deck.h"

Player::Player(std::string n) 
{  
    name = n;
    handVal = 0;
}
Player::Player()
{
}
Dealer::Dealer()
{
    
}
void Player::setHand(Card* card)
{
    hand.push_back(card);
}
void Player::getHand()
{
    for(int i=0; i<hand.size(); i++)
    {
        std::cout << i+1 << ". " << hand[i]->getSuit() << "\n";
    }
}
void Dealer::dealCard(Player* player, Deck* d)
{
    player->setHand(d->deck.top());
    d->deck.pop();
}
int Player::getHandVal()
{
    int val=0;
    int aceCounter=0;
    
    bool ace = false;
    
    for(int i=0; i<hand.size(); i++)
    {
        if(hand[i]->getValue() == 1)
        {
            ace = true;
        }
    }
    
    if(ace)
    {
        for(int i=0; i<hand.size(); i++)
        {
            if(hand[i]->getValue() == 1)
            {
                aceCounter++;
            }
            else
            {
                val += hand[i]->getValue();
            }
        }
    }
    else
    {
        for(int i=0; i<hand.size(); i++)
        {
            val += hand[i]->getValue();
        }
    }
    
    for(int i=0; i<aceCounter; i++)
    {
        if(val + 11 <= 21)
        {
            val+=11;
        }
        else
        {
            val += 1;
        }
    }
    
    return val;
}


