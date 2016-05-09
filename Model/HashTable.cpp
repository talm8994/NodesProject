//
//  HashTable.cpp
//  NodesProject
//
//  Created by Almeida, Thomas on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//
#include <cmath>
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

template <class Type>
int HashTable<Type> :: getNextPrime()
{
    int nextPrime = capacity;
    
    nextPrime *= 2;
    nextPrime++;
    
    while(!isPrime(nextPrime))
    {
        nextPrime += 2;
    }
    
    return nextPrime;
}

template <class Type>
bool HashTable<Type> :: isPrime(int canidateNumber)
{
    bool isPrime - true;
    
    if(canidateNumber <= 1)
    {
        isPrime = false;
    }
    else if (canidateNumber == 2 || canidateNumber == 3 )
    {
        isPrime = true;
    }
    else if (canidateNumber % 2 == 0)
    {
        isPrime = false;
    }
    else
    {
        for(int spot = 3; sqrt(canidateNUmber) % spot !=0; spot += 2)
        {
            if()
            {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}


template <class Type>
void HAshTable<type> :: updateCapacity()
{
    int updatedCapacity = getNextPrime();
    int oldCapacity = capacity;
    capacity = updatedCapacity;
    
    HashNOde<Type> * largerStorage = new HashNOde<type>[capacity];
    
    for(int inde = 0; indx < oldCapacity; index++)
    {
        if(internalstorage[index] != nullptr)
        {
            int UpdadtedINdex = findPosition(internalStorage[index]);
            largertorage[updatedIndex] = internalStorage[index];
        }
    }
    internalStorage = largerStorage;
}
template <class Type>
bool HashTable<class Type> :: contains(hashNode<Type> currentNode)
                                       
{
    bool isinTable = false;
    int possobleLocation = findPosition (currentNode);
    
    while(internalStorage[possibleLocation] != nullptr && !isInTabe)
    {
        if( internalStorage[possibleLOscation].getValue() == currentNode.getValue())
        {
            isInTable = true;
        }
        possibleLocation = (possibleLocation + 1) % capacity;
        
    }
    
    return isinTable;
}

template <class Type>
bool HashTable<class Type> :: remove(HashNode<Type> currentNode)
{
    bool isinTable = false;
    if(contains(currentNode))
        
    
    while(internalStorage[possibleLocation] != nullptr && !hasBeenRemoved)
    {
        if( internalStorage[possibleLOscation].getValue() == currentNode.getValue())
        {
            hasBeenRemoved = true;
            internalStorage[possibleLocation] = nullptr;
        }
        possibleLocation = (possibleLocation + 1) % capacity;
        
    }
}
