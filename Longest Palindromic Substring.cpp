string longestPalindrome(string S){
        int left, right;
        int len = 1;
        int index = 0;
        
        for(int i=1; i<S.size(); i++){
            // Odd
            left = i-1;
            right = i+1;
            
            while(i>=0 && right<S.size() && S[left]==S[right]){
                if(right-left+1>len){
                    len = right-left+1;
                    index=left;
                }
                left--; right++;
            }
            
            // Even
            left=i;
            right=i-1;
            
            while(i>=0 && right<S.size() && S[left]==S[right]){
                if(right-left+1>len){
                    len = right-left+1;
                    index=left;
                }
                left--; right++;
            }
        }
        string ans = S.substr(index, len);
        return ans;
    }
