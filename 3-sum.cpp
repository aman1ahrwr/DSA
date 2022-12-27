vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i=0; i<nums.size()-2; i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int low = i+1;
                int high = nums.size()-1;
                int sum = 0-nums[i];
                while(low<high){
                    if(nums[low]+nums[high]==sum){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        res.push_back(temp);
                        
                        while(low<high && nums[low]==nums[low+1]) low++;
                        while(low<high && nums[high]==nums[high-1]) high--;
                        
                        low++,high--;
                    }else if(nums[low]+nums[high]<sum){
                        low++;
                    }else{
                        high--;
                    }
                }
            }
        }
        return res;
    }


// Second Approach with Same logic
vector<vector<int>> findTriplets(vector<int>arr, int n, int S) {
	vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        int s=S-arr[i];
        int j=i+1;
        int k=n-1;
        while(j<k){
            if(arr[j]+arr[k]==s){
                int x=arr[j];
                int y=arr[k];
                ans.push_back({arr[i], x, y});
                j++;
                k--;
                while(j<k && arr[j]==x){
                    j++;
                }
                while(j<k && arr[j]==y){
                    k--;
                }
            }else if(arr[j]+arr[k]<s){
                j++;
            }else{
                k--;
            }
        }
        while(i<n && arr[i]==arr[i+1]){
            i++;
        }
    }
    return ans;
}
