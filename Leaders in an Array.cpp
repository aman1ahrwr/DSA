// Without Stack Better Space complexity Solution
vector<int> leaders(int arr[], int n){
        vector<int> ans;
        
        int maxi=arr[n-1];
        
        for(int i=n-1; i>=0; i--){
            if(arr[i]>=maxi){
                maxi=arr[i];
                ans.push_back(maxi);
            }
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }

// TC=O(N)
// SC=O(N)

// Stack Solution
vector<int> leaders(int arr[], int n){
        stack<int> st;
        vector<int> ans;
        
        st.push(arr[n-1]);
        
        for(int i=n-2; i>=0; i--){
            if(arr[i]>=st.top()){
                st.push(arr[i]);
            }
        }
        
        while(st.size()){
            int t=st.top();
            st.pop();
            ans.push_back(t);    
        }
        return ans;
    }

// TC=O(N)
// SC=O(N)
