int transfigure (string A, string B)
    {
        if(A.size()!=B.size()) return -1;
        
        unordered_map<char, int> map;
        for(int i=0; i<A.size(); i++){
            map[A[i]]++;
            map[B[i]]--;
            
        }
    
        for(auto i: map){
            if(i.second>0){
                return -1;
            }
        }
        
        int ans=0;
        int i=A.size()-1;
        int j=B.size()-1;
        while(i>=0){
            if(A[i]==B[j]){
                i--; j--;
            }else{
                ans++;
                i--;
            }
        }
        
        return ans;
    }
