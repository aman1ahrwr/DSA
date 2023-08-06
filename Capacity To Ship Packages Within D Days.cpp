#include<bits/stdc++.h>

int findCapacity(vector<int> arr, int mid, int d){
    int sum=0;
    int daysCnt=1;
    for(int i=0; i<arr.size(); i++){
        if((sum+arr[i])>mid){
            daysCnt++;
            sum=arr[i];
        }else{
            sum+=arr[i];
        }
    }
    
    if(daysCnt<=d){
        return 1;
    }else{
        return -1;
    }
}


int leastWeightCapacity(vector<int> &weights, int d)
{
    int low=*max_element(weights.begin(), weights.end());
    int high=accumulate(weights.begin(), weights.end(), 0);
    int ans=-1;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(findCapacity(weights, mid, d)==1){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }

    return ans;
}
// TC=O(N)*O(log(sum-maxEle))
// SC=O(1)
