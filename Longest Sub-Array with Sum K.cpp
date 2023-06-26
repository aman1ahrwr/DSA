// optimal solution for all types of elements positives, zeroes and negatives.
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
// TC(WC)=O(N^2), TC=O(N*logN)
// SC=O(N)


// optimal solution for non-negative elements
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int i=0;
    int j=0;

    int maxLen=0;
    int n=a.size();
    long long sum=a[0];
    while(i<n){
        while(j<=i && sum>k){
            sum-=a[j];
            j++;
        }

        if(sum==k){
            maxLen=max(maxLen, i-j+1);
        }
        i++;
        if(i<n) sum+=a[i];
    }

    return maxLen;
}
// TC(WC)=O(2N), TC=O(N)
// SC=O(1)
