vector <int> preorder(Node* root)
{
        vector<int> res;
        if(root==NULL) return res;
        stack<Node*> st;
        st.push(root);
        while(!st.empty()){
            root=st.top();
            st.pop();
            res.push_back(root->data);
            if(root->right!=NULL){
                st.push(root->right);
            }
            if(root->left!=NULL){
                st.push(root->left);
            }
        }
        return res;
}
