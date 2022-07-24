vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(root==NULL) return ans;
        map<int, int> map;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()){
            auto t = q.front();
            q.pop();
            Node* node = t.first;
            int line = t.second;
            if(map.find(line)==map.end()){
                map[line] = node->data;
            }
            
            if(node->left!=NULL){
                q.push({node->left, line-1});
            }
            if(node->right!=NULL){
                q.push({node->right, line+1});
            }
        }
        
        for(auto it:map){
            ans.push_back(it.second);
        }
        return ans;
    }
