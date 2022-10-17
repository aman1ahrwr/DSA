int compress(vector<char>& chars) {
        int i=0;
        int ansIndex = 0;
        
        while(i<chars.size()){
            int j=i+1;
            while(j<chars.size() && chars[i]==chars[j]){
                j++;
            }
            
            int count = j-i;
            
            chars[ansIndex++]=chars[i];
            
            if(count>1){
                string cnt = to_string(count);
                for(char c: cnt){
                    chars[ansIndex++]=c;
                }
            }
            i=j;
        }
        
        return ansIndex;
    }
