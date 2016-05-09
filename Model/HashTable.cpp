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
    this->internalStorage = new HashNode<Type>[capacity];
}

template <class Type>
HashTable<Type> :: ~HashTable()
{
    delete [] internalStorage;
}

template <class Type>
int HashTable<Type> :: getSize()
{
    return this-> size;
}

template <class Type>
void HashTable<Type> :: add(HashNode<Type> currentNode)
{
    if(!contains(currentNode))
    {
        if(size/capacity >= efficiencyPercentage)
           {
               updateSize();
           }
        int insertonIndex = findPositin(currentNode);
        
        if(internalStorage[insertonIndex] != nullptr)
        {
            while(internalStorage) [insertonIndex] != nullptr)
            {
                insertonIndex = (insertonIndex +1) % capacity;
            }
        }
        internalStorage[insertonIndex] = currentNode;
        size++;
    }
}

template <class Type>
int HashTable:: findPositin(HashNode<Type> currentNode)
{
    int position = 0;
    
    poition = currentNode.getKey() % capacity;
    
    return position;
}