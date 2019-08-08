#include <iostream>

using namespace std;

struct BSTNode
{
  int data;
  BSTNode *leftChild;
  BSTNode *rightChild;
};

BSTNode* CreateNewNode(int d)
{
    BSTNode *node = new BSTNode();
    node->data = d;
    node->leftChild = NULL;
    node->rightChild = NULL;
    
    return node;
}

BSTNode* Insert(BSTNode *startPtr, int d)
{
    if(startPtr == NULL)
    {
        return CreateNewNode(d);
    }
    
    if(d <= startPtr->data)
    {
       startPtr->leftChild = Insert(startPtr->leftChild,d); 
    }
    else
    {
        startPtr->rightChild = Insert(startPtr->rightChild,d);
    }
    
    return startPtr;
}

void inode(BSTNode *startPtr)
{
    if(startPtr!=NULL)
    {
        inode(startPtr->leftChild);
        cout<<startPtr->data<<endl;
        inode(startPtr->rightChild);
    }
}

int main()
{
    BSTNode *startPtr = NULL;
    
    startPtr = Insert(startPtr,25);
    startPtr = Insert(startPtr,15);
    startPtr = Insert(startPtr,30);
    startPtr = Insert(startPtr,20);
    startPtr = Insert(startPtr,8);
    startPtr = Insert(startPtr,35);
    startPtr = Insert(startPtr,10);
    
    inode(startPtr);

    return 0;
}
