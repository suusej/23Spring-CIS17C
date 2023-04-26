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
}