/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   BlackJack.cpp
 * Author: jesusferrer
 * 
 * Created on April 23, 2023, 3:34 PM
 */

#include "BlackJack.h"

BlackJack::BlackJack(int numPlayers)
{
    // Get player name(s) and bet(s)
    Player* arr = new Player[numPlayers];
    std::string name;
    float bet;
    
    for(int i=0; i<numPlayers; i++)
    {
        std::cout << "Enter Player " << i+1 << " name: ";
        std::cin >> name;
        std::cout << "Enter Player " << i+1 << " bet: $";
        std::cin >> bet;
        
        arr[i].setName(name);
        plyrQueue.push(new Player(arr[i]));
        
        plyrBets.insert(std::pair<std::string, float>(plyrQueue.back()->getName(), bet));
        
        
        std::cout << "\n";
    }
    
    delete[] arr;
    
    // Initialize Dealer
    dealer = new Dealer;
    dealer->setName("Dealer");
    
    // Initialize and shuffle deck
    deck = new Deck;
    deck->shuffle();
}
void BlackJack::dealInitialCards(int numPlayers)
{
    std::queue<Player*> temp;
    
    // Deal Players
    for(int i = 1; i<=numPlayers; i++)
    {
        dealer->dealCard(plyrQueue.front(), deck);
        dealer->dealCard(plyrQueue.front(), deck);
        std::cout << plyrQueue.front()->getName() << "'s" << " Hand\n";
        plyrQueue.front()->getHand();
        std::cout << "\n\n";
        temp.push(plyrQueue.front());
        plyrQueue.pop();
    }
    plyrQueue = temp;
    
    // Deal Dealer
    dealer->dealCard(dealer, deck);
    dealer->dealCard(dealer, deck);
    std::cout << dealer->getName() << "'s" << " Hand\n";
    dealer->getHand();
}
void BlackJack::playRound(int numPlayers)
{
    // Dealer Play
    
    while(dealer->getHandVal() < 17)
    {
        dealer->dealCard(dealer, deck);
    }
    std::cout << dealer->getName() << "'s" << " New Hand\n";
    dealer->getHand();
    std::cout << "\n";
    
    char action;
    bool bust;  
    bool winner;
    std::queue<Player*> temp;
    for(int i=1; i<= numPlayers; i++)
    {
        do
        {
            if(i!=1)
            {
                std::cout << "\nDealer's Hand\n";
                dealer->getHand();
            }
            std::cout << "\n" << plyrQueue.front()->getName() << "'s Turn\n";
            plyrQueue.front()->getHand();
            std::cout << "Choose Action (1,2)\n"
                      << "1. Stand\n"
                      << "2. Hit\n";
            std::cin >> action;
            
            switch(action)
            {
                case '1':
                {
                    // Player chooses to stand
                    break;
                }
                case '2':
                {
                    dealer->dealCard(plyrQueue.front(), deck);
                    plyrQueue.front()->getHand();
                    break;
                }
            }
            
            
            // Decide Winner
            bust = checkBust(plyrQueue.front());
            
            
            if(bust)
            {
                std::cout << plyrQueue.front()->getName() << " Busts\nDealer Wins\n\n";
            }
            else
            {
                if(checkBust(dealer))
                {
                    std::cout << "Dealer Busts\n" << plyrQueue.front()->getName() << " Wins!\n\n";
                }
                else
                {
                    checkWinner(plyrQueue.front(), dealer);
                }
                
                bust = true;
            }
            
        }while(action == '2' && bust == false);
        
        temp.push(plyrQueue.front());
        plyrQueue.pop();
    }
    
    std::list<std::string>::iterator itr;
    std::cout << "List of Winners\n";
    for(itr = winners.begin(); itr != winners.end(); ++itr)
    {
        std::cout << *itr << "\n";
    }
}
bool BlackJack::checkBust(Player* player)
{
    int val = player->getHandVal();
    
    if(val > 21)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void BlackJack::checkWinner(Player* player, Dealer* dealer)
{
    if(player->getHandVal() > dealer->getHandVal())
    {
        std::cout << player->getName() << " Wins!\n\n";
        winners.push_back(player->getName());
    }
    else if(player->getHandVal() < dealer->getHandVal())
    {
        std::cout << dealer->getName() << " Wins!\n\n";
    }
    else if(player->getHandVal() == dealer->getHandVal())
    {
        std::cout << "It's a Tie!\n\n";
    }
}