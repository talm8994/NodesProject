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

template <classType>
void TreeNode<type> :: setLeftChild(TreeNode<type> * leftChild)
{
    this -> leftChild = leftChild;
}

template <classType>
void TreeNode<type> :: setrightChild(TreeNode<type> * rightChild)
{
    this -> rightChild = rightChild;
}




template <class Type>
treeNode<type> :: treeNode(const Type& value) : node<Type(value)
{
    
    this -> leftChild  nullptr;
    this->rightChild nullptr;
    this-> parent nullptr;
    
    this->setValue(value);
}