/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Tree.h
 * Author: jesusferrer
 *
 * Created on June 6, 2023, 5:44 PM
 */

#ifndef TREE_H
#define TREE_H
#include "Card.h"

class Card;

struct Node
{
    Card* key;
    Node* left;
    Node* right;
    
    Node(Card* card)
    {
        key = card;
        left = nullptr;
        right = nullptr; 
    }
};
class Tree
{
private:
    Node* root;
    void insertRecursive(Node*, Card*);
    void inorderTravRecursive(Node*);
public: 
    Tree();
    void insert(Card*);
    void inorderTrav();
};

#endif /* TREE_H */

