int findSubString(string str)
    {
        unordered_map<char, int> map;
        unordered_set<char> set;
        for(char i: str){
            set.insert(i);
        }
        
        int n = set.size();
        int i=0;
        int j=0;
        int ans=INT_MAX;
        while(j<str.size()){
            map[str[j]]++;
            while(map.size()==n){
                map[str[i]]--;
                if(map[str[i]]==0) map.erase(str[i]);
                ans=min(ans, j-i+1);
                i++;
            }
            j++;
        }
        
        return ans;
    }
