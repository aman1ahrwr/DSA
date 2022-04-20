class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        input.push(x);    
    }

    int dequeue() {
        if(!output.empty()){
            int d = output.top();
            output.pop();
            return d;
        }else if(output.empty()){
            if(input.empty()){
                return -1;
            }else{
                while(!input.empty()){
                    int d = input.top();
                    input.pop();
                    output.push(d);
                }
            }
        }
        int d = output.top();
        output.pop();
        return d;
    }
};
