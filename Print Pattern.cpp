// Approach without Flag (Better)
void solve(vector<int> &ans, int N){
        if(N<=0){
            ans.push_back(N);
            return;
        }
        ans.push_back(N);
        solve(ans, N-5);
        ans.push_back(N);
    }

    vector<int> pattern(int N){
        vector<int> ans;
        solve(ans, N);
        return ans;
    }

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
