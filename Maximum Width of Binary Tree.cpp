 int widthOfBinaryTree(TreeNode* root) {
        if(!root) return -1;
        int width = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            int size = q.size();
            int mini = q.front().second;
            int first, last;
            for(int i=0; i<size; i++){
                int currInd = q.front().second-mini;
                TreeNode* node = q.front().first;
                q.pop();
                if(i==0) first = currInd;
                if(i==size-1) last = currInd;
                if(node->left) 
                    q.push({node->left, currInd*2+1});
                if(node->right)
                    q.push({node->right, currInd*2+2});
            }
            width = max(width, last-first+1);
        }
        return width;
    }
