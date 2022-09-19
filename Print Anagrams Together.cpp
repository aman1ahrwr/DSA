vector<vector<string> > Anagrams(vector<string>& str) {
        unordered_map<string, vector<string>> map;
        for(int i=0; i<str.size(); i++){
            string t = str[i];
            sort(t. begin(), t.end());
            map[t].push_back(str[i]);
        }
        
        vector<vector<string>> ans;
        for(auto i: map){
            ans.push_back(i.second);
        }
        
        return ans;
    }
