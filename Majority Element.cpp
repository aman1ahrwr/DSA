class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele;
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            if(cnt<=0){
                ele=nums[i], cnt=1;
            }else if(nums[i]==ele){
                cnt++;
            }else{
                cnt--;
            }
        }

        cnt=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==ele){
                cnt++;
            }
        }

        if(cnt>(nums.size()/2)){
            return ele;
        }

        return -1;
    }
};

// TC=O(N)
// SC=O(1)
