bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<int, int> map;
        for(int i=0; i<s.size(); i++){
            map[s[i]]++;
        }
        
        for(int i=0; i<t.size(); i++){
            if(map[t[i]]<0) return false;
            map[t[i]]--;
        }
        for(int i=0; i<map.size(); i++){
            if(map[s[i]]!=0) return false;
        }
        return true;
    }
