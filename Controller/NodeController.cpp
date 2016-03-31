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

