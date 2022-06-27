void recur(Node* root, int lvl, vector<int> &res){
    if(root==NULL) return;
    if(lvl==res.size()) res.push_back(root->data);
    recur(root->left, lvl+1, res);
    recur(root->right, lvl+1, res);
}


//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   vector<int> res;
   recur(root, 0, res);
   return res;
}
