#include<bits/stdc++.h>

int placeCows(vector<int> &stalls, int dist, int noCows){
    int cntCows=1;
    int lastInd=0;
    for(int i=1; i<stalls.size(); i++){
        if((stalls[i]-stalls[lastInd])>=dist && cntCows<noCows){
            cntCows++;
            lastInd=i;
        }

        if(cntCows==noCows){
            return 1;
        }
    }

    return 0;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());

    int low=1;
    int high=stalls[stalls.size()-1]-stalls[0];
    int ans=-1;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(placeCows(stalls, mid, k)==1){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }

    return ans;
}

// TC=O(N*log(maxEle-minEle))
// SC=O(1)
