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