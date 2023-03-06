void multiply(int n, vector<int>& ans){
        int carry=0;
        for(int i=0; i<ans.size(); i++){
            int pro=ans[i]*n;
            ans[i]=(pro+carry)%10;
            carry=(pro+carry)/10;
        }
        
        while(carry){
            ans.push_back(carry%10);
            carry/=10;
        }
    }

    vector<int> factorial(int N){
        vector<int> ans;
        ans.push_back(1);
        
        for(int i=2; i<=N; i++){
            multiply(i, ans);
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
