/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Tree.cpp
 * Author: jesusferrer
 * 
 * Created on June 6, 2023, 5:44 PM
 */

#include "Tree.h"
#include <iostream>

Tree::Tree() 
{
    root = nullptr;
}

void Tree::insert(Card* card)
{
    if(root == nullptr){root = new Node(card);}
    else{insertRecursive(root, card);}
}
void Tree::insertRecursive(Node* node, Card* card)
{
    if(*card < *(node->key))
    {
        if(node->left == nullptr)
        {
            node->left = new Node(card);
        }
        else
        {
            insertRecursive(node->left, card);
        }
    }
    else
    {
        if(node->right == nullptr){node->right = new Node(card);}
        else{insertRecursive(node->right, card);}
    }
}
void Tree::inorderTrav()
{
    if(root == nullptr)
    {
        return;
    }
    inorderTravRecursive(root);
    return;
}
void Tree::inorderTravRecursive(Node* node)
{
    if(node == nullptr)
    {
        return;
    }
    inorderTravRecursive(node->left);
    std::cout << node->key->getStrCard() << "\n";
    inorderTravRecursive(node->right);
}