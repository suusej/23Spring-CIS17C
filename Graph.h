/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Graph.h
 * Author: jesusferrer
 *
 * Created on June 7, 2023, 6:16 PM
 */

#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include "Card.h"

class Card;

class Graph 
{
private:
    std::vector<Card*> vertices;
    std::vector<std::vector<int> > adjacencyList;
public:
    Graph();
    void addVertex(Card* card);
    void addEdge(int fromVertex, int toVertex);
    std::vector<int> getNeighbors(int vertex);
    Card* getVertexData(int vertex);
    int getNumVertices();
};

#endif /* GRAPH_H */

