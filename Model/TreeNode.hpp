//
//  TreeNode.hpp
//  NodesProject
//
//  Created by Almeida, Thomas on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef TreeNode_hpp
#define TreeNode_hpp

#include "node.h"

namespace CTECData
{
    template <class Type>
    class TreeNode_hpp : public Node<Type>
    {
    private:
        TreeNode_hpp<Type> * leftChild;
        TreeNode_hpp<Type> * rightChild;
        TreeNode_hpp<Type> * parent;
        TreeNode<type> * getRightmostChild(CTECBianaryTree_hpp<type> RightSubTree);
        TreeNode<type> * getleftmostChild(CTECBianaryTree_hpp<type> LeftSubTree);
        void remove(TreeNode<type> nodeToBeRemoved);
    public:
        TreeNode_hpp();
        TreeNode_hpp(sonst Type& value);
        TreeNode_hpp(const Type& value, TreeNode_hpp<Type> * parent)
        void setLeftChild(TreeNode_hpp<Type> * leftChild);
        void setRightChild(TreeNode_hpp<Type> * rightChild);
        void setparent(TreeNode_hpp<Type> * parent);
        TreeNode_hpp<Type> * getLeftChild();
    };
}

#endif /* TreeNode_hpp */
