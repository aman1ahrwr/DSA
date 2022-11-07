vector<int> findLeastGreater(vector<int>& arr, int n) {
        set<int> set;
        vector<int> ans(n, -1);
        
        for(int i=n-1; i>=0; i--){
            auto pos = set.upper_bound(arr[i]);
            if(pos!=set.end()){
                ans[i]=*pos;
            }
            set.insert(arr[i]);
        }
        
        return ans;
    }
