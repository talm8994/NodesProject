//
//  CTECBianaryTree.cpp
//  NodesProject
//
//  Created by Almeida, Thomas on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "CTECBianaryTree.hpp"
using namespace std;
using namespace CTECData;


template <class Type>
CTECBianaryTree<Type> :: CTECBianaryTree()
{
    this->root = nullptr;
    this-size = 0;
    this-hight = 0;
    this-balnced = true;
    
}

template <class Type>
int CTECBianaryTree_hpp<Type> :: getSize()
{
    size = 0;
    size = calculatedSize(root);
    return size
}
template <class Type>
int CTECBianaryTree_hpp<type> :: calculatedSize(TreeNode<Type> * currentNode)
{
    if(currentNode != nullpr)
    {
        calculedSize(currentNode->getLeftChild());
        calculedSize(currentNode->getRightChild());
        size++
        
    }
}

template <class Type>
void CTECBianary<Type> :: preorderTraversal(TreeNodePM<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        cout << currentNode->getValue() << "" ;
        preorderTraversal(currentNode->getLeftChild());
        preorderTraversal(currentNode->getRightChild());
        
    }
}

template <class Type>
bool CTECBianaryTree_hpp<type> :: insert(const Type& value)
{
    if(contianis)
}
template<class Type>
void CTECBianryTree<Type> :: preorderTraversal(TreeNodePM<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        
        preorderTraversal(currentNode->getLeftChild());
        cout << currentNode->getValue() << "" ;
        preorderTraversal(currentNode->getRightChild());
        
    }

}


template<class Type>
bool CTECBianryTree<Type> :: contains(Type value)
{
    bool isInTree = false;
    
    if(root != nullptr)
    {
        if(root->getValue() == value)
        {
            isInTree = true;
        }
        else
        {
            if(value < root->getValue())
            {
                isInTree = contains(value, root->getLeftChild());
            }
            else
            {
                isIntree = contians(value, root->getRightChild());
            }
        }
    }
    
    return isInTree
}

template<class Type>
bool CTECBianryTree<Type> :: contains(Type value, CTECBianaryTree_hpp<Type> * currentTree)
{
    bool iInTree = false;
    
    if(currentTree != nullptr)
    {
        if(currentTree->getRoot()->getValue() == value)
        {
            isInTree = true;
        }
        else
        {
            if(value < currenTree->getValue())
            {
                isInTree = contains(value, currentTree->getLeftChild());
            }
            else
            {
                isIntree = contians(value, currentTree->getRightChild());
            }
            
        }
    }
    return isInTree;
}
