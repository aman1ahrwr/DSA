Node* solve(Node* root, int n1, int n2){
    Node* temp = root;
    if(temp->data>n1 && temp->data>n2){
        return solve(temp->left, n1, n2);
    }else if(temp->data<n1 && temp->data<n2){
        return solve(temp->right, n1, n2);
    }else{
        return temp;
    }
}

//Function to find the lowest common ancestor in a BST. 
Node* LCA(Node *root, int n1, int n2)
{
   return solve(root, n1, n2);
}
