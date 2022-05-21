    void solve(vector<int> arr, set<vector<int>> &s, int i, vector<int> temp){
        if(i==arr.size()){
            s.insert(temp);
            return;
        }
        solve(arr, s, i+1, temp);
        temp.push_back(arr[i]);
        solve(arr, s, i+1, temp);
    }
    
    //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        sort(arr.begin(), arr.end());
        set<vector<int>>s;
        vector<vector<int>> ans;
        solve(arr, s, 0, {});
        for(auto p: s){
            ans.push_back(p);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
