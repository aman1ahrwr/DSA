int longestUniqueSubsttr(string S){
        vector<int> vec(256, -1);
        int left=0, right=0;
        int n = S.size();
        int len = 0;
        while(right<n){
            if(vec[S[right]]!=-1){
                left = max(vec[S[right]]+1,left);
            }
            
            vec[S[right]]=right;
            
            len=max(len, right-left+1);
            right++;
        }
        return len;
    }
