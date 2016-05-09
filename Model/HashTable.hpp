//
//  HashTable.hpp
//  NodesProject
//
//  Created by Almeida, Thomas on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp
#include "HashNode.cpp"
#include <stdio.h>

template <class Type>
class HashTable
{
private:
    int size;
    int capacity;
    double efficiencyPercentage;
    HashNode<Type> * internalStorage;
    
    int findPositin(const Type& value);
    int handelCollision(const Type& value);
    void updateSize();
public:
    HashTable();
    ~HashTable();
    void add(HashNode<Type> currentNode);
    bool remove(HashNode<Type> currentNode);
    bool contains(HashNode<Type> currentNode);
    int getSize();
    
    
};

#endif /* HashTable_hpp */
