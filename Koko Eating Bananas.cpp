#include<bits/stdc++.h>
int findHours(vector<int> v, int mid){
    long long hrs=0;
    for(int i=0; i<v.size(); i++){
        hrs+=ceil((double)v[i]/(double)mid);
    }

    return hrs;
}

int minimumRateToEatBananas(vector<int> v, int h) {
    long long maxi=INT_MAX;
    for(auto i: v){
        if(i>maxi){
            maxi=i;
        }
    }
    int n=v.size();
    long long ans=10e9;

    long long low=1;
    long long high=maxi;

    while(low<=high){
        long long mid=low+(high-low)/2;
        long long val=findHours(v, mid);
        
        if(val<=h){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }

    return ans;
}

// TC=O(N*log(max(element)))
// SC=O(1)
