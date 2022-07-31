pair<bool, int> Balanced(Node *root){
        if(root==NULL){
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        
        pair<bool, int> left = Balanced(root->left);
        pair<bool, int> right = Balanced(root->right);
        
        int leftAns = left.first;
        int rightAns = right.first;
        
        bool diff = abs(left.second-right.second)<=1;
        
        pair<bool, int> ans;
        ans.second = max(left.second, right.second)+1;
        
        if(leftAns && rightAns && diff){
            ans.first=true;
        }else{
            ans.first=false;
        }
        return ans;
    }
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        return Balanced(root).first;
    }
