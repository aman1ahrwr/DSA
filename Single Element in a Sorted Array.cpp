class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return arr[0];
        if(arr[0]!=arr[1]) return arr[0];
        if(arr[n-2]!=arr[n-1]) return arr[n-1];

        int low=0;
        int high=n-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
                return arr[mid];
            }

            // (even, odd) -> left half of ans
            // (odd, even) -> right half of ans

            if((mid%2==0 && arr[mid]==arr[mid+1]) || (mid%2==1 && arr[mid-1]==arr[mid])){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }

        return -1;
    }
};

// TC=O(logN)
// SC=O(1)
