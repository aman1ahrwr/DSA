stack<int> input, output;

    void push(int x) {
        input.push(x);        
    }
    
    int pop() {
        int res = peek();
        output.pop();
        return res;
    }
    
    int peek() {
        if(output.size()){
            while(!input.size()){
                output.push(input.top()); 
                input.pop(); 
            }
        }
        int res = output.top();
        return res;
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
