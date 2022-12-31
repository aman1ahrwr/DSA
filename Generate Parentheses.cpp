void solve(int o, int c, int n, vector<string> &output, string temp){
        if(o<=n){
            solve(o+1, c, n, output, temp+'(');
        }
        if(c<o){
            solve(o, c+1, n, output, temp+')');
        }
        if(c==o && o==n)
            output.push_back(temp);
    }
    
    vector<string> AllParenthesis(int n) 
    {
        string temp="";
        vector<string> output;
        int o=0;
        int c=0;
        solve(o, c, n, output, temp);
        return output;
    }
