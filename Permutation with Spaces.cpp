void solve(vector<string> &ans, string temp, string S, int i){
        temp.push_back(S[i]);
        if(i==S.size()-1){
            ans.push_back(temp);
            return;
        }
        
        solve(ans, temp, S, i+1);
        temp.push_back(' ');
        solve(ans, temp, S, i+1);
    }

    vector<string> permutation(string S){
        vector<string> ans;
        string temp="";
        int i=0;
        solve(ans, temp, S, i);
        sort(ans.begin(), ans.end());
        return ans;
    }
