bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        
        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
        }
        
        for(auto i:map){
            if(i.second>=2){
                return true;
            }
        }
        
        return false;
    }
