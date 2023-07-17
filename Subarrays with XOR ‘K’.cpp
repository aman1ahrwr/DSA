#include<bits/stdc++.h>

int subarraysWithSumK(vector < int > a, int b) {
    int ans=0;
    unordered_map<int, int> mpp;
    int XOR=0;
    mpp[XOR]=1;

    for(int i=0; i<a.size(); i++){
        XOR=XOR^a[i];

        if(mpp.find(XOR^b)!=mpp.end()){
            ans+=mpp[XOR^b];
        }

        mpp[XOR]++;
    }
    
    return ans;
}

// TC=O(N)
// SC=O(N)
