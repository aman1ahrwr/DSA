#include<bits/stdc++.h>

int cntSubarrays(vector<int> &a, int maxSum){
    int cnt=1;
    int sum=0;
    for(int i=0; i<a.size(); i++){
        if(sum+a[i]<=maxSum){
            sum+=a[i];
        }else{
            cnt++;
            sum=a[i];
        }
    }

    return cnt;
}

int largestSubarraySumMinimized(vector<int> a, int k) {
    int low=*max_element(a.begin(), a.end());
    int high=accumulate(a.begin(), a.end(), 0);

    while(low<=high){
        int mid=low+(high-low)/2;
        int cnt=cntSubarrays(a, mid);

        if(cnt<=k){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }

    return low;
}

// TC=O(log(sum-maxEle)*N)
// SC=O(1)
