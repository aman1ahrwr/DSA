string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(), s.end());
        string start = s[0];
        string end = s[s.size()-1];
        string ans="";
        for(int i=0; i<start.size(); i++){
            if(start[i]!=end[i]) break;
            ans+=start[i];
        }
        return ans;
    }
