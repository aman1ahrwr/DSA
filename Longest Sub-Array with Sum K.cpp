// Better solution, however, not the most optimal solution.
int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        int ans=0;
        long long prefixSum=0;
        unordered_map<int, int> mpp;
        
        for(int i=0; i<n; i++){
            prefixSum+=arr[i];
            
            if(prefixSum==k){
                ans=i+1;
            }
            
            if(mpp.find(prefixSum-k)!=mpp.end()){
                ans=max(i-mpp[prefixSum-k], ans);
            }
            
            if(mpp.find(prefixSum)==mpp.end()){
                mpp[prefixSum]=i;
            }
        }
        
        return ans;
    } 
