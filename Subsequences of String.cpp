void solve(vector<string> &ans, string temp, string &str, int i){
    if(i==str.size()){
        if(temp!="")
            ans.push_back(temp);
        return;
    }
    
    solve(ans, temp, str, i+1);
    solve(ans, temp+str[i], str,  i+1);
}

vector<string> subsequences(string str){
    vector<string> ans;
    string temp="";
    int i=0;
    solve(ans, temp, str, i);
    return ans;
}
