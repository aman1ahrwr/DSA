int solve(Node* root){
        if(root==NULL){
            return 0;
        }
        int curr=root->data;
        int leftSum = solve(root->left);
        int rightSum = solve(root->right);
        
        root->data = leftSum+rightSum;
        return curr+leftSum+rightSum;
    }
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        solve(node);
    }
