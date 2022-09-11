int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        stack<int> st;
        int j=0;
        for(int i=0; i<A.size(); i++){
            st.push(A[i]);
            if(st.top()==B[j]){
                while(!st.empty() && st.top()==B[j]){
                    st.pop();
                    j++;
                }
            }
        }
        
        return st.empty();
    }
