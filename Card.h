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

    enum Suit
    {
        CLUBS, DIAMONDS, HEARTS, SPADES
    };
    class Card 
    {
    private:
        std::string suit;
        Suit suit2;
        int value;
    public:
        Card(std::string s, int v);
        Card();
        void setCard(std::string s, int v);
        std::string getSuit(){return suit;}
        Suit getSuit2(){return suit2;}
        int getValue(){return value;}
        std::string getStrCard();
        bool operator<=(const Card& other) const;
        bool operator<(const Card& other) const;
    };

    #endif /* CARD_H */

