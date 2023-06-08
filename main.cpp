/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: jesusferrer
 * Purpose: Run a round of Blackjack
 * Created on April 22, 2023, 4:02 PM
 */

// Recursions, Recursions Sort completed

#include <iostream>
#include "BlackJack.h"
#include "Deck.h"
#include "Card.h"
#include <algorithm>
#include <string>
#include <set>
#include <stack>
#include <vector>
#include "BloomFilter.h"
#include "Tree.h"
#include "Graph.h"

using namespace std;

void mergeSort(vector<Card*>&,int,int);
void merge(vector<Card*>&,int,int,int);

int main() 
{
    int menuChoice;
    do
    {
        cout << "1. Display 104 card deck before and after shuffling\n";
        cout << "2. Run a round of Blackjack\n";
        cout << "3. Display shuffled cards, sort then search for a card\n";
        cout << "4. Display a 52 card deck\n";
        cout << "5. Display shuffled cards, sort using tree\n";
        cout << "6. Display deck using Graph\n";
        cout << "Enter a number from menu: ";
        cin >> menuChoice;
        cout << "\n";
    }while(menuChoice < 1 || menuChoice > 6);
    
    switch(menuChoice)
    {
        case 1:
        {
            Deck* deck = new Deck;
            
            cout << "\tDeck Before Shuffling\n";
            deck->prnt();
            
            
            cout << "\n\tDeck After Shuffling\n";
            deck->shuffle();
            deck->prnt();
            
            delete deck;
            
            break;
        }
        case 2:
        {
            int numPlayers; 
            cout << "Enter the number of players (1-4)\n";
            cin >> numPlayers;
            while(numPlayers < 1 || numPlayers > 4)
            {
                cout << "Enter the number of players (1-4).\n";
                cin >> numPlayers;
            }
            
            // Initialize Game / Game Set up
            BlackJack* game = new BlackJack(numPlayers);
            
            // Deal First Two Cards
            game->dealInitialCards(numPlayers);
            
            // Round Starts
            game->playRound(numPlayers);
            
            delete game;
            break;
        }
        case 3:
        {
            Deck* deck = new Deck;
            cout << "\tDeck Before Sorting\n";
            deck->shuffle();
            deck->prnt();
            
            vector<Card*> srtDeck;
            
            for(int i=0; i<104; i++)
            {
                srtDeck.push_back(deck->getCard());
            }
            
            // Sort
            mergeSort(srtDeck, 0, srtDeck.size()-1);
            
            cout << "\n\tDeck After Sorting\n";
            for(int i=0; i<104; i++)
            {
                cout << i+1 << ". " << srtDeck[i]->getStrCard() << "\n";
            }
            
            string suit;
            string strValue;
            string card;
            
            cout << "Enter CLUBS, HEARTS, DIAMONDS, or SPADES for the suit\n";
            cin >> suit;
            cout << "Enter 2-10 or J, Q, K, or A for the value\n";
            cin >> strValue;
            card = suit + "\t(" + strValue + ")";
            
            BloomFilter filter;
            for(int i=0; i<104; i++)
            {
                filter.insert(srtDeck[i]->getStrCard());
            }
            
            if(filter.contains(card))
            {
                cout << card << " is in the deck\n";
                cout << "14.65% chance of a false positive\n";
            }
            else
            {
                cout << card << " is not in the deck\n";
            }
            
            delete deck;
            break;

        }
        case 4:
        {
            Deck* deck104 = new Deck(52);
            set<string> deck52;
            
            for(int i=1; i<=52; i++)
            {
                deck52.insert(deck104->getStrCard());
            }
            for (auto& str : deck52) 
            {
            std::cout << str << "\n";
            }
            delete deck104;
            break;
        }
        case 5:
        {
            Deck* deck = new Deck;
            cout << "\tDeck Before Sorting\n";
            deck->shuffle();
            deck->prnt();
            
            cout << "\n\tDeck After Sorting\n";
            deck->sortTree();
            delete deck;
            break;
        }
        case 6:
        {
            Deck* deck = new Deck;
            
            cout << "\n\t108 Card Deck using Graph\n";
            deck->getGraph();
            break;
        }
    }
    return 0;
}

void mergeSort(vector<Card*>& deck, int left, int right)
{
    if(left<right)
    {
        int mid = left+(right-left)/2;
        
        mergeSort(deck, left, mid);
        mergeSort(deck, mid+1, right);
        
        merge(deck, left, mid, right);
    }
}
void merge(vector<Card*>& deck, int left, int mid, int right)
{
    int n1 = mid-left+1;
    int n2 = right-mid;
    
    vector<Card*> leftHalf(n1);
    vector<Card*> rightHalf(n2);
    
    for(int i=0; i<n1; i++)
    {
        leftHalf[i] = deck[left+i];
    }
    for(int i=0; i<n2; i++)
    {
        rightHalf[i] = deck[mid+i+1];
    }
    
    int i=0;
    int j=0;
    int k=left;
    
    while(i<n1 && j<n2)
    {
        if(leftHalf[i] <= rightHalf[j])
        {
            deck[k] = leftHalf[i];
            i++;
        }
        else
        {
            deck[k] = rightHalf[j];
            j++;
        }
        k++;
    }
    
    while (i < n1)
    {
        deck[k] = leftHalf[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        deck[k] = rightHalf[j];
        j++;
        k++;
    }
}