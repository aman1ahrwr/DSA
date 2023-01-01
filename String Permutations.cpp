void solve(vector<string> &ans, string &S, int i, int n){
        if(i==n){
            ans.push_back(S);
            return;
        }
        
        
        for(int j=i; j<n; j++){
            swap(S[i], S[j]);
            solve(ans, S, i+1, n);
            swap(S[i], S[j]);
        }
    }
    
    vector<string> permutation(string S)
    {
        vector<string> ans;
        int i=0;
        int n=S.size();
        solve(ans, S, i, n);
        sort(ans.begin(), ans.end());
        return ans;
    }
