// More easier approach
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums.begin(), nums.begin()+(nums.size()-k));
        reverse(nums.begin()+(nums.size()-k), nums.end());
        reverse(nums.begin(), nums.end());
    }
};


// Hard to grasp approach
void rotate(vector<int>& nums, int k) {
        int n=nums.size();

        vector<int> temp(n);
        for(int i=0; i<n; i++){
            temp[(i+k)%n]=nums[i];
        }

        nums=temp;
    }
