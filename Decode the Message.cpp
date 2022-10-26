string decodeMessage(string key, string message) {
        unordered_map<char, char> map;
        char t = 'a';
        for(char i: key){
            if(i!=' ' && map.find(i)==map.end()){
                map[i]=t;
                t++;
            }
        }
        
        string ans="";
        for(char i: message){
            if(i!=' '){
                ans+=map[i];
            }else{
                ans+=' ';
            }
        }
        
        return ans;
    }
