class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int currSum=0;
        unordered_map<int, int> mpp;
        int n=nums.size();
        int cnt=0;
        mpp[0]=1;

        for(int i=0; i<n; i++){
            currSum+=nums[i];
            int t = currSum-k;
            cnt+=mpp[t];
            mpp[currSum]+=1;
        }

        return cnt;
    }
};

// TC=O(N*logN)
// SC=O(N)
