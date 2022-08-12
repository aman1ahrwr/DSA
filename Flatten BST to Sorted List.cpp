
void inorder(TreeNode<int>* root, vector<int> &in){
    if(root==NULL){
        return;
    }
    
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
    
}

TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<int> inorderVec;
    inorder(root, inorderVec);
    int size = inorderVec.size();
    
    TreeNode<int>* newRoot = new TreeNode<int>(inorderVec[0]);
    TreeNode<int>* curr = newRoot;
    
    for(int i=1; i<size; i++){
        TreeNode<int>* temp = new TreeNode<int>(inorderVec[i]);
        curr->left=NULL;
        curr->right=temp;
        curr=temp;
    }
    
    curr->left=NULL;
    curr->right=NULL;
    
    return newRoot;
}
