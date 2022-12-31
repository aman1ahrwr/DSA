 TreeNode* solve(int left, int right, vector<int> &nums){
        if(left>right){
            return NULL;
        }

        int mid = (left+right)/2;
        TreeNode* newNode = new TreeNode(nums[mid]);
        newNode->left=solve(left, mid-1, nums);
        newNode->right=solve(mid+1, right, nums);

        return newNode;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(0, nums.size()-1, nums);
    }
