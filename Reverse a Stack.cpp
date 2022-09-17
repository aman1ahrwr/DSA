void solve(stack<int> &st, stack<int> &St){
        if(St.empty()){
            return;
        }    
        int t =St.top();
        St.pop();
        st.push(t);
        
        solve(st, St);
    }
    
    stack<int> Reverse(stack<int> St){
        stack<int> st;
        solve(st, St);
        return st;
    }
