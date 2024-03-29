class MinStack {
     stack<long long> st;
     long long mini;
public:
    MinStack() {
        while(st.empty()==false) st.pop();
        mini = INT_MAX;
    }
   
    void push(int value) {
        long long val = value;
        if(st.empty()){
            st.push(val);
            mini = val;
        }else{
            if(val<mini){
                st.push(2*val*1LL-mini);
                mini = val;
            }else{
                st.push(val);
            }
        }
        
    }
    
    void pop() {
        if(st.empty()) return;
        long long ele = st.top();
        st.pop();
        if(ele<mini){
            mini=2*mini-ele;
        }
    }
    
    int top() {
        if(st.empty()) return -1;
        long long ele = st.top();
        if(ele<mini){
            return mini;
        }
        return ele;
    }
    
    int getMin() {
        return mini;
    }
};
