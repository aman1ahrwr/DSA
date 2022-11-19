void inorderTraversal(vector<int> &inorder, Node* root){
    if(root==NULL){
        return;
    }
    
    inorderTraversal(inorder, root->left);
    inorder.push_back(root->data);
    inorderTraversal(inorder, root->right);
}

float findMedian(struct Node *root)
{
      vector<int> inorder;
      inorderTraversal(inorder, root);
      int n=inorder.size();
      if(n%2==0){
          return (float)(inorder[n/2]+inorder[n/2-1])/2;
      }else{
          return inorder[n/2];   
      }
      
}
