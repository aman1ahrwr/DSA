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

// Using Recursion
void insertAtBottom(stack<int> &stack, int t){
    if(stack.empty()){
        stack.push(t);
        return;
    }
    
    int x=stack.top();
    stack.pop();
    
    insertAtBottom(stack, t);
    
    stack.push(x);
}

void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return;
    }
    
    int t = stack.top();
    stack.pop();
    
    reverseStack(stack);
    
    insertAtBottom(stack, t);
}
