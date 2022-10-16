 bool checkEqual(int a[26], int b[26]){
        for(int i=0; i<26; i++){
            if(a[i]!=b[i]) return false;
        }
        
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        int s1Cnt[26]={0};
        for(int i=0; i<s1.size(); i++){
            s1Cnt[s1[i]-'a']++;
        }
        
        int s2Cnt[26]={0};
        int i=0; 
        int j=s1.size();
        while(i<j && i<s2.size()){
            s2Cnt[s2[i]-'a']++;
            i++;
        }
        
        if(checkEqual(s1Cnt, s2Cnt)) return true;
        
        while(i<s2.size()){
            s2Cnt[s2[i]-'a']++;
            s2Cnt[s2[i-j]-'a']--;
            i++;
            if(checkEqual(s1Cnt, s2Cnt)) return true;
        }
        
        return false;
    }
