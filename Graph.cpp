/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Graph.cpp
 * Author: jesusferrer
 * 
 * Created on June 7, 2023, 6:16 PM
 */

#include "Graph.h"

Graph::Graph()
{
}
void Graph::addVertex(Card* card)
{
    vertices.push_back(card);
    adjacencyList.push_back(std::vector<int>());
}

void Graph::addEdge(int fromVertex, int toVertex)
{
    adjacencyList[fromVertex].push_back(toVertex);
    adjacencyList[toVertex].push_back(fromVertex);
}

std::vector<int> Graph::getNeighbors(int vertex)
{
    return adjacencyList[vertex];
}

Card* Graph::getVertexData(int vertex)
{
    return vertices[vertex];
}

int Graph::getNumVertices()
{
    return vertices.size();
}