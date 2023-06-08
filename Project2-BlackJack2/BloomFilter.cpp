/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   BloomFilter.cpp
 * Author: jesusferrer
 * 
 * Created on June 6, 2023, 3:56 PM
 */

#include "BloomFilter.h"

BloomFilter::BloomFilter(){}
void BloomFilter::insert(const std::string& str) 
{
    unsigned int hash = hashFunction(str.c_str(), str.length());
    bitArr.set(hash % bitArr.size());
}
bool BloomFilter::contains(const std::string& str) 
{
    unsigned int hash = hashFunction(str.c_str(), str.length());
    return bitArr.test(hash % bitArr.size());
}
unsigned int BloomFilter::hashFunction(const char* str, unsigned int length) {
    unsigned int hash = 0;
    unsigned int prime = 31; // A prime number for hashing

    for (unsigned int i = 0; i < length; ++i) {
        hash = (hash * prime) + str[i];
    }

    return hash;
}
