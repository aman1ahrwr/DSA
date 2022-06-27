void recur(Node* root, int lvl, vector<int> &res){
        if(root==NULL) return;
        if(lvl==res.size()) res.push_back(root->data);
        recur(root->right, lvl+1, res);
        recur(root->left, lvl+1, res);
    }


  
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        vector<int> res;
        recur(root, 0, res);
        return res;
    }
