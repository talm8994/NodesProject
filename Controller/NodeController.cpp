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

