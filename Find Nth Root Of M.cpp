long long findVal(int n, long long mid, int m){
    long long val=1;
    for(int i=1; i<=n; i++){
        val=val*mid;
        if(val>m){
            return 2;
        }
    }
    
    if(val==m) return 1;
    return 0;
}

int NthRoot(int n, int m) {
    long long low=1;
    long long high=m;

    if(m==0 || m==1){
        return m;
    }
    
    while(low<=high){
        long long mid=(low+high)/2;
        
        if(findVal(n, mid, m)==1){
            return mid;
        }

        if(findVal(n, mid, m)==0){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }

    return -1;
}

// TC=O(NlogM)
// SC=O(1)
