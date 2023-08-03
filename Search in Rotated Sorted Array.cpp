class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low=0;
        int high=arr.size()-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(arr[mid]==target){
                return mid;
            }

            if(arr[low]<=arr[mid]){ //Left half -> Sorted
                if(arr[low]<=target && target<arr[mid]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }else{ //Right half -> Sorted
                if(arr[mid]<target && target<=arr[high]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }

        return -1;
    }
};

// TC=O(logN)
// SC=O(1)
