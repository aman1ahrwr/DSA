int firstUniqChar(string s) {
        vector<int> alpha(26);
        
        for(int i=0; i<s.size(); i++){
            int ind = s[i]-'a';
            alpha[ind]++;
        }
        
        for(int i=0; i<s.size(); i++){
            if(alpha[s[i]-'a']==1){
                return i;
            }
        }
        
        return -1;
    }
