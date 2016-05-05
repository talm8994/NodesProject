//
//  HashTable.hpp
//  NodesProject
//
//  Created by Almeida, Thomas on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

#include <stdio.h>

template <class Type>
class HashTable
{
private:
    int size;
    int capacity;
    Type * internalStorage;
    double efficiencyPercentage;
    
    int findPositin(const Type& value);
    int handelCollision(const Type& value);
    void updateSize();
public:
    HashTable();
    ~HashTable);
    void add(const Type & value);
    bool remove(const Type & value);
    bool contains(const Type & value);
    int getSize();
    
    
};

#endif /* HashTable_hpp */
