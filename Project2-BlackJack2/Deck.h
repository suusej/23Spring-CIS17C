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
#include <vector>
#include "Tree.h"
#include "Graph.h"
#include <queue>

class Card;
class Graph;
class Tree;

class Deck 
{
private:
    std::stack<Card*> deck;
    
    void recursiveSort(int start, int end);
    int partition(int start, int end);
    
public:
    Deck();
    Deck(int);
    void shuffle();
    void prnt();
    std::string getStrCard();
    Card* getCard();
    friend class Dealer;
    void shuffleRecursive(int);
    std::vector<Card*> srtDeck;
    void sortTree();
    void breadthFirstTraversal(Graph&,int);
    void getGraph();
    
};

#endif /* DECK_H */

