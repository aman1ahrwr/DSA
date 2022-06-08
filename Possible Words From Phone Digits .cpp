vector<string> keys = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void recur(int a[], vector<string> &ans, string temp, int N, int ind){
        if(ind==N){
            ans.push_back(temp);
            return;
        }
        
        for(int i=0; i<keys[a[ind]].size(); i++){
            recur(a, ans, temp+keys[a[ind]][i], N, ind+1);
        }
    }
    
    vector<string> possibleWords(int a[], int N)
    {
        vector<string> ans;
        recur(a, ans, "", N, 0);
        return ans;
    }
