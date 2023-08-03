// Iterative Approach
class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n=arr.size();
    
    if(n==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;

    int low=1;
    int high=n-2;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }

        if(arr[mid-1]<arr[mid]){
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

// Recursive Approach
int findPeak(int arr[],int n,int low,int high){
        int mid = low +(high-low)/2;
        
        if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid]>=arr[mid+1])){
            return mid;
        }else if(mid>0 && arr[mid-1]>arr[mid]){
            return findPeak(arr,n,low,mid-1);
        }else{
            return findPeak(arr,n,mid+1,high);
        }
    }
    
    int peakElement(int arr[], int n)
    {
        return findPeak(arr,n,0,n-1);
    }

// TC=O(logN)
// SC=O(1)
