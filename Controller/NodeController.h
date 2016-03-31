/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: talm8994
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_
#include "../Model/Node.h"
#include "../Model/Node.cpp"
#include "../Model/ArrayNode.h"
#include "../Model/ArrayNode.cpp"
#include "../Model/CTECArray.cpp"
#include "../Model/Timer.h"

#include <string>
/*
 * more templates
 */
using namespace std;
class NodeController
{
private:
	CTECArray<int> * notHipsterInts;
	Timer arrayTimer;
    
    int * mergeData;
    void doMergesort();
    void mergessort(int data [], int size);
    void merge(int data [], int sizeOne, int sizeTwo);

public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* CONTROLLER_NODECONTROLLER_H_ */
