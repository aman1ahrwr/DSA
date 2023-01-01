// Approach with flag
void solve(vector<int> &ans, int &flag, int N, int n){
        if(flag==1 && N==n){
            ans.push_back(N);
            return;
        }
        
        if(N>0 && flag==0){
            ans.push_back(N);
            solve(ans, flag, N-5, n);
            return;
        }
        
        if(flag==1 || N<=0){
            flag=1;
            ans.push_back(N);
            solve(ans, flag, N+5, n);
        }
    }

    vector<int> pattern(int N){
        int flag=0;
        vector<int> ans;
        int n=N;
        solve(ans, flag, N, n);
        return ans;
    }
