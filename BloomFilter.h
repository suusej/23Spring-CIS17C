/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   BloomFilter.h
 * Author: jesusferrer
 *
 * Created on June 6, 2023, 3:56 PM
 */

#ifndef BLOOMFILTER_H
#define BLOOMFILTER_H

#include <string>
#include <bitset>

class BloomFilter 
{
    private:
        std::bitset<104> bitArr;

        unsigned int hashFunction(const char* str, unsigned int length);

public:
    BloomFilter();
    void insert(const std::string& str);
    bool contains(const std::string& str);
};

#endif /* BLOOMFILTER_H */

