vector<int> nextSmall(vector<int> & arr, int n){
        stack<int> st;
        vector<int> ans(n, -1);

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

    vector<int> prevSmall(vector<int> & arr, int n){
        stack<int> st;
        vector<int> ans(n, -1);

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

    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> next = nextSmall(heights, n);
        vector<int> prev = prevSmall(heights, n);

        int area=INT_MIN;
        for(int i=0; i<n; i++){
            int l=heights[i];
            if(next[i]==-1){
                next[i]=n;
            }
            int b = next[i]-prev[i]-1;
            int newArea = l*b;
            area=max(area, newArea);
        }

        return area;
    }
