#include<bits/stdc++.h>

int countStu(vector<int> &arr, int n, int pages){
    int cnt=1;
    long long sum=0;
    for(int i=0; i<n; i++){
        if(sum+arr[i]<=pages){
            sum+=arr[i];
        }else{
            cnt++;
            sum=arr[i];
        }
    }

    return cnt;
}

int findPages(vector<int>& arr, int n, int m) {
    if(m>n) return -1;

    int low=*max_element(arr.begin(), arr.end());
    int high=accumulate(arr.begin(), arr.end(), 0);
    
    while(low<=high){
        int mid=low+(high-low)/2;
        int cnt=countStu(arr, n, mid);
        
        if(cnt>m){
            low=mid+1;
        }else{
            high=mid-1;
        }
    } 

    return low;
}

// TC=O(log(sum-maxEle)*N)
// SC=O(1)
