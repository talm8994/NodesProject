/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: talm8994
 */

#include "CTECArray.h"
using namespace std;

#include <assert.h>

#include <iostream>
/*
 * it makes it so when you put a negitive number or 0 it wont let you and make you put it in again
 */
template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	this->head = nullptr;


	//defence
	assert(size > 0);

	for(int index= 0; index < size; index++)
	{
	if(head != nullptr)
		{
			ArrayNode<Type> * nextNode = new ArrayNode<Type>();
			nextNode->setNext(head);
			this->head = nextNode;
		}
	else
		{
			//The firstArrayNode needs to be made
			ArrayNode<Type> * firstNode = new ArrayNode <Type>();
			this->head = firstNode;
		}
	}
}
/*
 * this makes it so that it delets the next thing on the list an moves on
 */
template <class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index <size; index++)
	{
		if(deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);
			{
				delete deleteMe;
			    deleteMe = head;
			}

			delete head;

		}
	}
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

/*
 * this makes sure that you have the right size of array so that it wont go on forever
 */
template<class Type>
int CTECArray<Type>::getSize()
{
	return this->size;
}

template<class Type>
Type CTECArray<Type>::get(int position)
{
	assert(position < size && position >= 0);
		{
			// im in
			ArrayNode<Type> * current = head;
			for(int spot = 0; spot <= position; spot++)
			{
				if(spot != position)
				{
					current = current->getNext();
				}
				else
				{
					return current->getValue();
				}
			}
            return current->getValue();
		}
	}

template<class Type>
int CTECArray<Type> :: nextIndexOf(int startingIndex, Type searchValue)
{
    assert(this-> size > 0);
    assert(startingIndex >= 0 && startingIndex < this-> size);
    
    ArrayNode<Type> * current = head;
    int indexNotFound = -1;
    
    for(int index = 0; index<startingIndex; index++)
    {
        current = current->getNext();
    }
    
    for(int index = startingIndex; index < this ->size; index++)
    {
        if(current->getvalue() == searchValue)
        {
            return index;
        }
        else
        {
            current = current->getValue();
        }
    }
    return indexNotFound;
 }

/*
 * this fixes it so that it goes back to where it belongs
 */
template<class Type>
void CTECArray<Type>::set(int position, const Type& value)
{
	assert(position < size && position >= 0);
			{
				ArrayNode<Type> * current = head;
				for(int spot = 0; spot <= position; spot++)
				{
					if(spot != position)
					{
					    current = current->getNext();
					}
					else
					{
						current->setValue(value);
					}
				}

        }
}
