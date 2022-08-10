pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    BinaryTreeNode<int>* temp = root;
    int pre = -1;
    int suc = -1;
    
    while(temp->data!=key){
        if(temp->data>key){
            suc = temp->data;
            temp=temp->left;
        }else{
            pre = temp->data;
            temp=temp->right;
        }
    }
    
    BinaryTreeNode<int>* leftMax =temp->left;
    while(leftMax!=NULL){
        pre=leftMax->data;
        leftMax=leftMax->right;
    }
    
    BinaryTreeNode<int> * rightMin = temp->right;
    while(rightMin!=NULL){
        suc = rightMin->data;
        rightMin=rightMin->left;
    }
    
    return {pre, suc};
}
