Node* minBST(Node*root){
    if(root==NULL) return NULL;
    Node* t = root;
    while(t->left!=NULL){
        t=t->left;
    }
    return t;
}

// Function to delete a node from BST.
Node *deleteNode(Node *root, int x) {
    if(root==NULL) return root;
    
    if(root->data==x){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        
        // 1 child
        if(root->left!=NULL && root->right==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        
        if(root->left==NULL && root->right!=NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        
        // 2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini = minBST(root->right)->data;
            root->data=mini;
            root->right =  deleteNode(root->right, mini);
            return root;
        }
        
    }else if(root->data>x){
        root->left = deleteNode(root->left, x);
        return root;
    }else{
        root->right = deleteNode(root->right, x);
        return root;
    }
}
