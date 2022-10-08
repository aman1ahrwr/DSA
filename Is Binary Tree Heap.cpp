bool isMax(struct Node* root){
        if(root->left==NULL || root->right==NULL){
            return true;
        }else if(root->right==NULL){
            return isMax(root->left);
        }else{
            return root->data>=root->left->data && root->data>=root->right->data && isMax(root->left) && isMax(root->right);
        }
    }
    
    bool isCBT(struct Node* root, int i, int n){
        if(root==NULL){
            return true;
        }
        
        if(i>=n){
            return false;
        }else{
            bool left = isCBT(root->left, 2*i+1, n);
            bool right = isCBT(root->right, 2*i+2, n);
            return left && right;
        }
    }
    
    int countNode(struct Node* root){
        if(root==NULL){
            return 0;
        }
        
        int ans = 1 + countNode(root->left) + countNode(root->right);
        return ans;
    }
  
    bool isHeap(struct Node* tree) {
        int i = 0;
        int n = countNode(tree);
        if(isMax(tree) && isCBT(tree, i, n)){
            return true;
        }
        return false;
    }
