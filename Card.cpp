/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Card.cpp
 * Author: jesusferrer
 * 
 * Created on April 22, 2023, 4:06 PM
 */

#include "Card.h"
#include <string>

Card::Card(std::string s, int v)
{
    suit = s;
    value = v;   
}
Card::Card()
{
    suit = "\0";
    value = 0;
}
void Card::setCard(std::string s, int v)
{
    suit = s;
    value = v;
    if(s.at(0) == 'S')
    {
        suit2 = SPADES;
    }
    if(s.at(0) == 'H')
    {
        suit2 = HEARTS;
    }
    if(s.at(0) == 'D')
    {
        suit2 = DIAMONDS;
    }
    if(s.at(0) == 'C')
    {
        suit2 = CLUBS;
    }
}
std::string Card::getStrCard()
{
    return suit ;
}
bool Card::operator<=(const Card& other) const 
{
    if(value == other.value) 
    {
        return suit <= other.suit;
    }
    return value <= other.value;
}
bool Card::operator<(const Card& other) const
{
    if(suit2 == other.suit2)
    {
        return value < other.value;
    }
    return suit2 < other.suit2;
}