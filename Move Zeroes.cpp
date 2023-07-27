// Easy to understand Solution
vector<int> moveZeros(int n, vector<int> arr) {
    int k=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[k]=arr[i];
            k++;
        }
    }

    for(int i=k; i<n; i++){
        arr[i]=0;
    }

    return arr;
}

// 'Hard to understand personally for me' Solution.
void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        while(i<nums.size()){
            if(nums[i]==0){
                i++;
            }else{
                swap(nums[i++], nums[j++]);
            }
        }
    }
// TC=O(N)
// SC=O(1)
