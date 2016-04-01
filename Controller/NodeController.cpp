/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: talm8994
 */

#include "NodeController.h"
#include <stdlib.h>


NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
}

NodeController::~NodeController()
{
    doMergesort();
}
void NodeController :: start()
{
	arrayTimer.startTimer();
	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		notHipsterInts->set(index, (index + 1));
	}

	for(int index = notHipsterInts->getSize() -1; index >= 0; index--)
	{
		cout << "the stuff  notHipsterInts array node " << index << " are: " << notHipsterInts->get(index) << endl;
	}

	arrayTimer.stopTimer();
	arrayTimer.displayInformation();
}

void NodeController::quicksort(int first, int last)
{
    int pivotIndex;
    
    if(first < last)
    {
        pivotIndex = partitiont(first, last)
        quicksort(first, pivotIndex-1);
        quicksort(pivotIndex+1, last)
        
    }
    
}

int NodeController::partition(int first, int last)
{
    int pivot;
    
    int index, smallIndex;
    swap(first,(first + last)/2)
    
    pivot = mergeData[first]
    smallIndex = first;
    
    for(index = first + 1; index <= last; index++)
    {
        if(mergeData[index] < pivot)
        {
            smallIndex++;
            swap(smallIndex, index);
        }
    }
    swap(first, smallIndex)
    return smallIndex;
}

void NodeController::swap (int first, int last)
{
    int temp = mergeData[first];
    mergeData{first] = mergeData[last];
        mergeData [last] = temp;
}
    
    void NodeController::doQuick()
    {
        mergeData = new int[10000000];
        
        for(int spot = 0; spot < 1000000; spot++)
        {
            int myRandom = rand()
            mergeData[spot] = myRandom;
        }
        
        Timer mergeTimer;
        mergeTimer.startTimer();
        quicksort(0, 100000 -1);
        mergeTimer.stopTimer();
        mergeTimer.displyTimerInformation();
        
        delete [] mergedata;
    }

void NodeController::sortData()
{
    CTECArray<int> randomNumberArray(5000);
    CTECArray<int> randomNumberList;
    
    for(int spot = 0; spot < 5000; spot++)
    {
        int myRandom = rand();
        randomNumberArray.set(spot, myRandom);
        randomNumberList.addToEnd(myRandom);
        
    }
    
    Timer sortTimer;
    sortTimer.startTimer();
    randomNumberArray.selectionSort();
    sortTimer.stopTimer();
    sortTimer.resetTimer();
    
    
}

void NodeController::doMergesort()
{
    mergeData = new int[500000];
    
    for(int spot = 0; spot < 500000; spot++)
    {
        int myRandom = rand();
        mergeData[spot] = myRandom;
    }
    for (int spor =0; spot < 5000; spot++)
    {
        count << mergeData[spot] << ", "
    }
    
    Timer mergeTimer;
    mergeTimer.startTimer();
    mergesort(mergeData, 5000000);
    mergeTimer.stopTimer();
    mergeTimer.displayInformation();
    
    
    delete [] mergeData;
}

void NodeController::mergesort(int data[], int size)
{
    int sizeOne;
    int siztTwo;
    
    if(size > 1)
    {
        sizeOne = size/2;
        sizeTwo = size-sizeOne;

        mergesort(data, sizeOne);
        mergesort(data+sizeOne), sizeTwo)
    }
}

void NodeController::merge(int data[], int sizeOne, int sizeTwo)
{
    int * temp;
    int copied = 0;
    int copied1 = 0;
    int copied2 = 0;
    int index;
    
    temp = new int [sizeOne = sizeTwo];
    
    while ((copied1 < sizeOne) && (copied2 < sizeTwo))
    {
        if(data[copied1] < (data + sizeOne) ) [copied2])
        {
            temp[copied++] = data[copied1++];
        }
        else
        {
            temp[copied++] = (data + sizeOne) [copied2++];
        }
    }
    
    while(copied1 < sizeOne)
    {
        temp[copied++] = data[copied1++];
    }
    while(copied2 < sizeTwo)
    {
        temp[copied++] = (data + sizeOne) [copied2++];
    }
    
    for(index = 0; index < sizeOne + sizeTwo; index++)
    {
        data[index] = temp[index];
    }
    delete [] temp;
}

