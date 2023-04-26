/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: jesusferrer
 *
 * Created on April 22, 2023, 4:02 PM
 */

#include <iostream>
#include "BlackJack.h"
#include "Deck.h"
#include <algorithm>
#include <string>
#include <set>
using namespace std;

/*
 * 
 */
int main() 
{
    int menuChoice;
    do
    {
        cout << "1. Display 104 card deck before and after shuffling\n";
        cout << "2. Run a round of Blackjack\n";
        cout << "3. Display shuffled cards, sort then search for a card\n";
        cout << "4. Display a 52 card deck\n\n";
        cout << "Enter a number from menu: ";
        cin >> menuChoice;
        cout << "\n";
    }while(menuChoice < 1 || menuChoice > 4);
    
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
            
            break;
        }
        case 3:
        {
            Deck* deck = new Deck;
            cout << "\tDeck Before Sorting\n";
            deck->shuffle();
            deck->prnt();
            
            vector<string> srtDeck;
            for(int i=0; i<104; i++)
            {
                srtDeck.push_back(deck->getStrCard());
            }
            
            sort(srtDeck.begin(), srtDeck.end());
            
            cout << "\n\tDeck After Sorting\n";
            for(int i=0; i<104; i++)
            {
                cout << i+1 << ". " << srtDeck[i] << "\n";
            }
            
            string suit;
            string strValue;
            string card;
            
            cout << "Enter CLUBS, HEARTS, DIAMONDS, or SPADES for the suit\n";
            cin >> suit;
            cout << "Enter 2-10 or J, Q, K, or A for the value\n";
            cin >> strValue;
            
            card = suit + "\t (" + strValue + ")";
            
            vector<string>::iterator srtDeckIterator;
            
            srtDeckIterator = find(srtDeck.begin(), srtDeck.end(), card);
            
            if(srtDeckIterator != srtDeck.end())
            {
                cout << card << " found at line " << srtDeckIterator - srtDeck.begin() + 2 << "\n";
            }
            else
            {
                cout << card << " not found\n";
            }
            
            break;
        }
        case 4:
        {
            Deck* deck104 = new Deck;
            set<string> deck52;
            
            for(int i=1; i<=104; i++)
            {
                deck52.insert(deck104->getStrCard());
            }
            for (auto& str : deck52) {
            std::cout << str << "\n";
    }
            
        }
    }
    return 0;
}

