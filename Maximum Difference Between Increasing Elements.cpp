int maximumDifference(vector<int>& nums) {
        int least=INT_MAX;
        int ansDiff=-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<least){
                least=nums[i];
            }
            int currDiff=nums[i]-least;
            if(currDiff>ansDiff && least!=nums[i]){
                ansDiff=currDiff;
            }
        }

        return ansDiff;
    }
