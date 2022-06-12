vector<int> inOrder(Node* root) {
        vector<int> res;
        stack<Node*> st;
        Node* node = root;
        while(true){
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }else{
                if(st.empty()) break;
                node = st.top();
                st.pop();
                res.push_back(node->data);
                node=node->right;
            }
        }
        return res;
    }
