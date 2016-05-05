//
//  HashTable.cpp
//  NodesProject
//
//  Created by Almeida, Thomas on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "HashTable.hpp"
#include <iostream>

using namespace std;

template <class Type>
HashTable<Type> :: HashTable()
{
    this->size = 0;
    this->capacity = 101;
    this->efficincyPercentage = .667;
    this->internalStorage = new Type[capacity];
}

template <class Type>
HashTable<Type> :: ~HashTable()
{
    delete [] internalStorage;
}

template <class Type>
HashTable<Type> :: getSize()
{
    return this-> size;
}

template <class Type>
void HashTable<Type> :: add(const Type &value)
{
    if(!contains(value))
    {
        if(size/capacity >= efficiencyPercentage)
           {
               updateSize();
           }
        int insertonIndex = findPositin(value);
        
        if(internalStorage[insertonIndex] != nullptr)
        {
            while(internalStorage) [insertonIndex] != nullptr)
            {
                insertonIndex = (insertonIndex +1) % capacity;
            }
        }
        internalStorage[insertonIndex] = value;
        size++;
    }
}