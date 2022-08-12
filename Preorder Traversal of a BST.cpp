BinaryTreeNode<int>* BST(vector<int> &preOrder, int mini, int maxi, int &ind){
        if(ind>=preOrder.size()){
            return NULL;
        }
        
        if(preOrder[ind]<mini || preOrder[ind]>maxi){
            return NULL;
        }
        
        BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preOrder[ind++]);
        root->left = BST(preOrder, mini, root->data, ind);
        root->right = BST(preOrder, root->data, maxi, ind);
        
        return root;
    }
BinaryTreeNode<int>* preorderToBST(vector<int> &preOrder) {
    int i=0;
    return BST(preOrder, INT_MIN, INT_MAX, i);
}
