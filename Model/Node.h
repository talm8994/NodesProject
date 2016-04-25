/*
 * Node.h
 *
 *  Created on: Jan 27, 2016
 *      Author: talm8994
 */

#ifndef MODEL_NODE_H_
#define MODEL_NODE_H_
/*
 * this creats the template so that you can put in in a differnt class
 */
template <class Type>
class Node
{
private:
	Type value;
	Node * pointers;
    void trytree();
public:
	Node();
	Node(const Type& value);
	virtual ~Node();
	Type getValue();
	void setValue(const Type& value);
	Node * getPointers();
};

#endif /* MODEL_NODE_H_ */
