// Easy to understand Approach usng stack
int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> st;
        for(int i=0; i<n; i++){
            st.push(i);
        }
        
        while(st.size()!=1){
            int a = st.top();
            st.pop();
            
            int b = st.top();
            st.pop();
            
            if(M[a][b]==1){
                st.push(b);
            }else{
                st.push(a);
            }
        }
        
        int ans = st.top();
    
        for(int i=0; i<n; i++){
            if(M[i][ans]==0 && i!=ans){
                return -1;
            }
        }
        
        for(int i=0; i<n; i++){
            if(M[ans][i]!=0){
                return -1;
            }
        }
        
        
        return ans;
    }



// Without stack
int celebrity(vector<vector<int> >& M, int n) 
    {
            int c=0;
            for(int i=1; i<n; i++){
                if(M[c][i]==1){
                    c=i;
                }
            }
            for(int i=0; i<n; i++){
                if(i!=c && (M[c][i]==1 || M[i][c]==0)){
                    return -1;
                }
            }
            return c;
    }
