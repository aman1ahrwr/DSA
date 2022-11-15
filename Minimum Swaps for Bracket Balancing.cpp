int minimumNumberOfSwaps(string S){
        if(S.size()==0) return 0;
        
        int ans=0;
        int value=0;
        for(auto c: S){
            if(c=='['){
                value++;    
            } 
            else{
                value--;
                if(value<0) ans-=value;
            }
        }
        
        return ans;
    }
