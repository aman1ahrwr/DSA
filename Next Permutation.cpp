vector<int> nextPermutation(int N, vector<int> arr){
        int idx = -1;
        for(int i=N-1; i>0; i--){
            if(arr[i]>arr[i-1]){
                idx = i;
                break;
            }
        }
        if(idx==-1){
            reverse(arr.begin(),arr.end());
        }else{
        int prev = idx;
        for(int i=idx+1; i<N; i++){
            if(arr[i]<=arr[prev] && arr[i]>arr[idx-1]){
                prev = i;
            }
        }
        swap(arr[idx-1],arr[prev]);
        reverse(arr.begin()+idx,arr.end());
        }
        return arr;
    }


// Same Approach Different Code
void nextPermutation(vector<int>& nums) {
        int ind=-1;

        for(int i=nums.size()-1; i>0; i--){
            if(nums[i-1]<nums[i]){
                ind=i-1;
                break;
            }
        }

        if(ind==-1){
            reverse(nums.begin(), nums.end());
            return;
        }

        int swapInd=ind+1;
        int i=ind+2;
        while(i<nums.size()){
            if(nums[i]>nums[ind] && nums[i]<=nums[swapInd]){
                swapInd=i;
            }
            i++;
        }

        swap(nums[ind], nums[swapInd]);

        reverse(nums.begin()+ind+1, nums.end());
    }
