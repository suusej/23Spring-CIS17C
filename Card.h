/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Card.h
 * Author: jesusferrer
 *
 * Created on April 22, 2023, 4:06 PM
 */

#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>

class Card 
{
private:
    std::string suit;
    int value;
public:
    Card(std::string s, int v);
    Card();
    void setCard(std::string s, int v);
    std::string getSuit(){return suit;}
    int getValue(){return value;}
};

#endif /* CARD_H */

