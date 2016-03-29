/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: talm8994
 */

#include "CTECList.h"

CTECList::CTECList()
{

}
template <class Type>
 Type CTECList<Type> :: removeFromFront()
{
	Type thingToremove;
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = this->head->getNext();
	thingToRemove = this->head->getValue();
	delete this->head;
	this->head = newHead;

	return thingToRemove;
}

template<class Type>
void CTECList<Type> :: calculateSize()
{
	asset(size >= 0);

	int count = 0;
	if(head == nullptr)
	{
		size = count;
	}
	else
	{
		count++;
		ArrayNode<Type> * current = head;
		while(current ->getNext() != nullptr)
		{
			count++;
			current = current->getNext();
		}
		size = count;
	}
}
template<class Type>
Type CTECList<Type> :: removeFromIndex(int index)
		{
	Type returnValue;
		}

template<class Type>
Type CTECLIST<Type> : removefromEnd()
{
	assert(size>0);
	type returnValue;
	if(size == 1)
	{
		ArrayNode<Type> * toRemove = end;
		returnValue = removeFromFront;
		end = nullptr;
		head = nullptr;
		delete toRemove;
	}
	else
	{
		Array<Type> * current = head;
		for(int index = 0;  index < size - 1; index++)
		{
			current = current->getNext();
		}
	returnValue = end-> getValue();
	delete end;
	current = end;
	current->setNext(nulptr);
	}
}

template <class Type>
void CTECList<Type> :: swap(int indexOne, int indexTwo)
{
    assert(indexOne <size && indexTwo <size);
    Type temp = getFromIndex(indexOne);
    set(indexOne, getFromIndex(indexTwo));
    set(indexTwo, temp);
}
template<class Type>
Type CTECList<Type> :: selectionSort()
{
    for(int outerLoop = 0; outerLoop <size - 1; outerLoop++)
    {
        int selectedMinimum  = outerLoop;
        
        for(int innerLoop = outerLoop + 1; innerLoop <size; innerLoop++)
        {
            if(getFromIndex(innerLoop)< getFromIndex(selectedMinimum))
            {
                selectedMinimum = innerLoop;
            }
        }
        
        if(selectedMinimum != outerLoop)
        {
            swap(selectedMinimum, outerLoop);
        }
    }
}


template <class Type>
int CTECList<Type>:: indexOf(<#Type searchValue#>)
{
    assert(this->size > 0);
    
    int index
    ArrayNode<Type> * searchPointer
    for(searchPointer = head; searchPointer != nullptr; searchPointer = searchPointer->getNExt ())
    {
        if (searchValue == searchPointer->getValue())
        {
            return index;
        }
        index++;
    }
    index = -1;
return index0
};

