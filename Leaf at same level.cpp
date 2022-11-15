 void solve(Node* root, bool &ans, int &maxH, int h){
        if(root==NULL) return;
        if(ans==0) return;
        if(root->left==NULL && root->right==NULL){
            if(maxH==-1){
                maxH=h;
            }else{
                if(maxH!=h){
                    ans=0;
                }
            }
            return;
        }
        
        solve(root->left, ans, maxH, h+1);
        solve(root->right, ans, maxH, h+1);
    }
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        int h=0;
        int maxH=-1;
        bool ans=1;
        solve(root, ans, maxH, h);
        return ans;
    }
