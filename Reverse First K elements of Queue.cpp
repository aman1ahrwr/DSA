queue<int> modifyQueue(queue<int> q, int k) {
    stack<int> st;
    queue<int> ansQ;
    while(k){
        int add = q.front();
        q.pop();
        st.push(add);
        k--;
    }
    
    while(st.size()!=0){
        int add = st.top();
        st.pop();
        ansQ.push(add);
    }
    
    while(q.size()!=0){
        int add = q.front();
        q.pop();
        ansQ.push(add);
    }
    
    return ansQ;
}
