bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            sum%=k;
            
            if(sum==0 && i) return true;
            if(map.find(sum)!=map.end()){
                if(i-map[sum]>1){
                    return true;
                }
                
            }else{
                map[sum]=i;
            }
        }
        return false;
    }
