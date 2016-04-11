//
//  TreeNode.cpp
//  NodesProject
//
//  Created by Almeida, Thomas on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "TreeNode.hpp"
using namespace:: CTECData;

template <class Type>
TreeNode.hpp<Type> :: TreeNode.hpp() : Node<Type>()
{
    this -> leftChild  nullptr;
    this->rightChild nullptr;
    this-> parent nullptr;
}

template <class Type>
treeNode<type> :: treeNode(const Type& value) : node<Type(value)
{
    
    this -> leftChild  nullptr;
    this->rightChild nullptr;
    this-> parent nullptr;
    
    this->setValue(value);
}