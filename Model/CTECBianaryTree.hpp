//
//  CTECBianaryTree.hpp
//  NodesProject
//
//  Created by Almeida, Thomas on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef CTECBianaryTree_hpp
#define CTECBianaryTree_hpp

#include "treeNode.cpp"
#endif /* CTECBianaryTree_hpp */

namespace CTECData
{
    class CTECBianaryTree_hpp
    {
    private:
        int size;
        TreeNode<Type> * root;
        int hight;
        bool balanced;
    public:
        CTECBianaryTree_hpp();
        ~CTECBianaryree();
        bool inster( const Type& value);
        type remove (cont Type& value);
        bool contains(Type value);
        int getSize();
        int getHight();
        bool isBalanced();
        void preorderTraversal(TreeNode<Type> * currentNode);
        void inorderTraversral(TreeNode<Type> * currentNode);
        void postorderTraversal(TreeNode<Type> * currentNode);
        
    };
}
