vector<int> nextSmaller(int* arr, int n){
        vector<int> ans(n, -1);
        stack<int> st;
        
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            
            if(!st.empty()){
                ans[i]=st.top();
            }
            
            st.push(i);
        }
        return ans;
    }
    
    vector<int> prevSmaller(int* arr, int n){
        vector<int> ans(n, -1);
        stack<int> st;
        
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            
            if(!st.empty()){
                ans[i]=st.top();
            }
            
            st.push(i);
        }
        return ans;
    }
    
    int largestAreaRectangle(int* arr, int n){
        vector<int> next = nextSmaller(arr, n);
        vector<int> prev = prevSmaller(arr, n);
        int area=INT_MIN;
        for(int i=0; i<n; i++){
            int b=arr[i];
            if(next[i]==-1){
                next[i]=n;
            }
            int l=next[i]-prev[i]-1;
            
            int newArea=l*b;
            area=max(area, newArea);
        }
        
        return area;
    }
  
    int maxArea(int M[MAX][MAX], int n, int m) {
        int area=largestAreaRectangle(M[0], m);
        
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){
                if(M[i][j]!=0){
                    M[i][j]+=M[i-1][j];
                }
            }
            int newArea=largestAreaRectangle(M[i], m);
            area=max(area, newArea);
        }
        
        return area;
    }
