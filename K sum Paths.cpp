void recur(Node* root, int k, vector<int> &path, int &count){
        if(!root) return;
        
        path.push_back(root->data);
        
        recur(root->left, k, path, count);
        recur(root->right, k, path, count);
        
        int sum = 0;
        for(int i=path.size()-1; i>=0; i--){
            sum+=path[i];
            if(sum==k) count++;
        }
        
        path.pop_back();
    }
  
    int sumK(Node *root,int k)
    {
        int count = 0;
        vector<int> path;
        recur(root, k, path, count);
        return count;
    }
