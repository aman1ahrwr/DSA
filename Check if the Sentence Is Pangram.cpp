bool checkIfPangram(string sentence) {
        if(sentence.size()<26) return false;
        
        vector<int> v(26, 0);
        
        for(int i=0; i<sentence.size(); i++){
            v[sentence[i]-'a']--;
        }
        
        for(auto i: v){
            if(i==0){
                return false;
            }
        }
        
        return true;
    }
