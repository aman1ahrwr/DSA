void inorder(TreeNode<int>* root, vector<int> &in){
    if(root==NULL){
        return;
    }
    
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

TreeNode<int>* createBST(int s, int e, vector<int> &in){
    if(s>e){
        return NULL;
    }
    
    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(in[mid]);
    root->left = createBST(s, mid-1, in);
    root->right = createBST(mid+1, e, in);
    
    return root;
}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
    vector<int> inorderVec;
    inorder(root, inorderVec);
    return createBST(0, inorderVec.size()-1, inorderVec);
}
