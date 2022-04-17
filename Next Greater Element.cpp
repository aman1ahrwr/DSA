vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> ans(n,0);
        stack<long long> st;
        st.push(-1);
        for(int i=n-1; i>=0; i--){
            while(st.top()!=-1 && st.top()<=arr[i]){
                st.pop();    
            }
            ans[i]=st.top();
            st.push(arr[i]);
        }
        return ans;
    }
