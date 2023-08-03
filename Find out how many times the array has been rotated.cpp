#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){
    int ans=INT_MAX;
    int ansInd=-1;
    
    int low=0;
    int high=arr.size()-1;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[low]<=arr[high]){
            if(ans>arr[low]){
                ansInd=low;
                ans=arr[low];
            }
            
            break;
        }
        
        if(arr[low]<=arr[mid]){
            if(ans>arr[low]){
                ansInd=low;
                ans=arr[low];
            }
            low=mid+1;
        }else{
            if(ans>arr[mid]){
                ans=arr[mid];
                ansInd=mid;
            }
            high=mid-1;
        }
    }   

    return ansInd;
}

// TC=O(logN)
// SC=O(1)
