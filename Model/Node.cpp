/*
 * Node.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: talm8994
 */
#include <iostream>
#include "Node.h"
/*
 * this stuff greats the arrays to a point
 */

template <class Type>
Node<Type>::Node()
{
	this->pointers =nullptr;
}
template <class Type>
Node<Type>::Node(const Type& value)
{
	this->value= 0;
	this->pointers =nullptr;
}
void Node:: tryTree()
{
    CTECBinaryTree<int firstTree
    firstTree.insert(72);
    firstTree.insert(846);
    firstTree.insert(-46);
    firstTree.insert(3);
    
    cout <<"aklfja;" << endl;
    firstTree.inorderTranversal(firstTree.getRoot());
    cout <<"aklfja;" << endl;
    firstTree.preorderTranversal(firstTree.getRoot());
    cout <<"aklfja;" << endl;
    firstTree.postorderTranversal(firstTree.getRoot());
}

template<class Type>
Node<Type>::~Node()
{
	// TODO Auto-generated destructor stub
}
template <class Type>
Type Node<Type> :: getValue()
{
	return this->value;
}

template <class Type>
void Node<Type> :: setValue(const Type& value)
{
	this->value = value;
}

template <class Type>
Node<Type> * Node<Type> :: getPointers()
{
	return this->pointers;
}

