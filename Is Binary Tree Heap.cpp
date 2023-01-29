bool isCBT(struct Node* root, int n, int i){
        if(root==NULL){
            return true;
        }    
        
        if(i>=n){
            return false;
        }
        
        return isCBT(root->left,n, 2*i+1) && isCBT(root->right, n, 2*i+2);
    }
    
    bool isMax(struct Node* root){
        if(root->left==NULL && root->right==NULL){
            return true;
        }else if(root->right==NULL){
            return root->data>root->left->data;
        }else{
            return root->data>=root->left->data && isMax(root->left) 
            && root->data>=root->right->data && isMax(root->right);
        }
    }
  
    int countNode(struct Node* root){
        if(root==NULL){
            return 0;
        }
        return 1 + countNode(root->left) + countNode(root->right);
    }
  
    bool isHeap(struct Node* tree) {
        
        int n = countNode(tree);
        int i=0;
        if(isCBT(tree, n, i) && isMax(tree)){
            return true;
        }
        return false;
    }
