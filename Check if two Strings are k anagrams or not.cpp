 bool areKAnagrams(string str1, string str2, int k) {
        if(str1.size()!=str2.size()) return false;
        
        vector<int> vec(26, 0);
        
        for(int i=0; i<str1.size(); i++){
            vec[str1[i]-'a']++;
        }
        
        for(int i=0; i<str2.size();i++){
            vec[str2[i]-'a']--;
        }
        
        
        int count=0;
        for(int i=0; i<vec.size(); i++){
            if(vec[i]>0){
                count+=vec[i];
            }
        }
        
        if(count>k){
            return false;
        }
        
        return true;
    }
